#include "main.h"
/**
 * print_error - function to print error message and exit
 * @message: error message to be printed
 */
void print_error(const char *message)
{
	fprintf(stderr, "%s\n", message);
	exit(98);
}

/**
 * print_elf_header_info - function that print eld header
 * @header:pointer to the heder to print
 *
 * Return: void
 */
void print_elf_header_info(Elf64_Ehdr *header)
{
	char *class_str, *data_str, *abi_str;

	printf("  Magic:   ");
	for (int i = 0; i < EI_NIDENT; i++)
	{
		printf("%02x", header->e_ident[i]);
		if (i < EI_NIDENT - 1)
			printf(" ");
	}
	printf("\n");

	class_str = (header->e_ident[EI_CLASS] == ELFCLASS64) ? "ELF64" :
	"ELF32";
	data_str = (header->e_ident[EI_DATA] == ELFDATA2LSB) ?
	"2's complement, little-endian" : "2's complement, big-endian";
	abi_str = (header->e_ident[EI_OSABI] == ELFOSABI_SYSV) ? "UNIX - System V" :
	"Other";

	printf("  Class:   %s\n", class_str);
	printf("  Data:    %s\n", data_str);
	printf("  Version: %d (current)\n", header->e_ident[EI_VERSION]);
	printf("  OS/ABI:  %s\n", abi_str);
	printf("  ABI Version: %d\n", header->e_ident[EI_ABIVERSION]);
	printf("  Type:    %s\n", (header->e_type == ET_EXEC) ?
			"EXEC (Executable file)" :
			(header->e_type == ET_DYN) ? "DYN (Shared object file)" :
			(header->e_type == ET_REL) ? "REL (Relocatable file)" : "Other");
	printf("  Entry point address: 0x%lx\n", header->e_entry);
}
/**
 * main - main function
 * @argc: number of command line argu
 * @argv: array of command line argu
 *
 * Return: Always (0)
 */
int main(int argc, char *argv[])
{
	if (argc != 2)
		print_error("Usage: elf_header elf_filename");

	int fd = open(argv[1], O_RDONLY);

	if (fd == -1)
		print_error("Error: Can't open file");

	Elf64_Ehdr header;

	if (read(fd, &header, sizeof(header)) != sizeof(header) ||
	memcmp(header.e_ident, ELFMAG, SELFMAG) != 0)
		print_error("Error: Not an ELF file");

	print_elf_header_info(&header);
	close(fd);

	return (0);
}

