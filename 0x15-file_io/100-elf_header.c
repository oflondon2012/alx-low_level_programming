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
 * print_class - function to print elf message
 * @elf_class: specifies the architecture for which the binaty is intended
 */
void print_class(unsigned char elf_class)
{
	printf("  Class:                             ");
	switch (elf_class)
	{
		case ELFCLASSNONE:
			printf("None\n");
			break;
		case ELFCLASS32:
			printf("ELF32\n");
			break;
		case ELFCLASS64:
			printf("ELF64\n");
			break;
		default:
			printf("Unknown (%02x)\n", elf_class);
			break;
	}
}

/**
 * print_data - Function to print data encoding
 * @data_encoding: determines the endianness of the data in the ELF file
 */
void print_data(unsigned char data_encoding)
{
	printf("  Data:                              ");
	switch (data_encoding)
	{
		case ELFDATANONE:
			printf("None\n");
			break;
		case ELFDATA2LSB:
			printf("2's complement, little endian\n");
			break;
		case ELFDATA2MSB:
			printf("2's complement, big endian\n");
			break;
		default:
			printf("Unknown (%02x)\n", data_encoding);
			break;
	}
}

/**
 * print_version - Function to print version
 * @version: indicates the version of the ELF specification
 */
void print_version(Elf32_Word version)
{
	printf("  Version:                           %d\n", version);
}

/**
 * print_osabi - Function to print OS/ABI
 * @osabi: specifies the target environment and system calls that
 *
 */
void print_osabi(unsigned char osabi)
{
	printf("  OS/ABI:                            ");
	switch (osabi)
	{
		case ELFOSABI_NONE:
			printf("UNIX - System V\n");
			break;
		case ELFOSABI_HPUX:
			printf("UNIX - HP-UX\n");
			break;
		case ELFOSABI_NETBSD:
			printf("UNIX - NetBSD\n");
			break;
		default:
			printf("Unknown (%02x)\n", osabi);
			break;
	}
}

/**
 * print_abi_version - Function to print ABI version
 * @abi_version: indicates the specific version of ABI that
 * the ELF is designed to work with
 */
void print_abi_version(unsigned char abi_version)
{
	printf("  ABI Version:                       %d\n", abi_version);
}

/**
 * print_file_type - Function to print file type
 * @file_type: specifies the file type
 */
void print_file_type(Elf32_Half file_type)
{
	printf("  Type:                              ");
	switch (file_type)
	{
		case ET_NONE:
			printf("None\n");
			break;
		case ET_REL:
			printf("Relocatable\n");
			break;
		case ET_EXEC:
			printf("Executable\n");
			break;
		case ET_DYN:
			printf("Shared object\n");
			break;
		case ET_CORE:
			printf("Core dump\n");
			break;
		default:
			printf("Unknown (%04x)\n", file_type);
			break;
	}
}

/**
 * print_entry_point - Function to print entry point address
 * @entry_point: indicates the entry point
 */
void print_entry_point(Elf32_Addr entry_point)
{
	printf("  Entry point address:               0x%lx\n",
			(unsigned long)entry_point);
}

/**
 * display_elf_header - Function to display ELF header information
 * @filename: indicates the filename
 */
void display_elf_header(const char *filename)
{
	Elf64_Ehdr header;
	int i, fd = open(filename, O_RDONLY);

	if (fd == -1)
		print_error("Failed to open file");

	if (read(fd, &header, sizeof(Elf64_Ehdr)) != sizeof(Elf64_Ehdr))
		print_error("Failed to read ELF header");

	printf("ELF Header:\n");
	printf("  Magic:   ");
	for (i = 0; i < EI_NIDENT; i++)
		printf("%02x ", header.e_ident[i]);
	printf("\n");

	print_class(header.e_ident[EI_CLASS]);
	print_data(header.e_ident[EI_DATA]);
	print_version(header.e_version);
	print_osabi(header.e_ident[EI_OSABI]);
	print_abi_version(header.e_ident[EI_ABIVERSION]);
	print_file_type(header.e_type);
	print_entry_point(header.e_entry);

	close(fd);
}

/**
 * main - Main function
 * @argc: number of command line arguments
 * @argv: array of command line arguments
 * Return: 0 success
 */
int main(int argc, char *argv[])
{
	if (argc != 2)
	{
		fprintf(stderr, "Usage: %s <ELF file>\n", argv[0]);
		return (98);
	}

	display_elf_header(argv[1]);
	return (0);
}
