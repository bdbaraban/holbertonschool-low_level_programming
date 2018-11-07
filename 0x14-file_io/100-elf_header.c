/*
 * File: 100-elf_header.c
 * Auth: Brennan D Baraban
 */

#include <elf.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

void check_elf(Elf32_Ehdr header);
void print_magic(Elf32_Ehdr header);
void print_class(Elf32_Ehdr header);
void print_data(Elf32_Ehdr header);
void print_version(Elf32_Ehdr header);
void print_abi(Elf32_Ehdr header);
void print_osabi(Elf32_Ehdr header);
void print_type(Elf32_Ehdr header);
void print_entry(Elf32_Ehdr header);

/**
 * check_elf - Checks if a file is an ELF file.
 * @header: An Elf32_Ehdr header obtained from a file.
 *
 * Description: If the file is not an ELF file - exit code 98.
 */
void check_elf(Elf32_Ehdr header)
{
	int index;

	for (index = 0; index < 4; index++)
	{
		if (header.e_ident[index] != 127 &&
		    header.e_ident[index] != 'E' &&
		    header.e_ident[index] != 'L' &&
		    header.e_ident[index] != 'F')
		{
			dprintf(STDERR_FILENO,
				"Error: Not an ELF file - "
				"it has the wrong magic bytes at the start\n");
			exit(98);
		}
	}
}

/**
 * print_magic - Prints the magic numbers of an ELF header.
 * @header: An Elf32_Ehdr header struct.
 *
 * Description: Magic numbers are separated by spaces.
 */
void print_magic(Elf32_Ehdr header)
{
	int index;

	printf("  Magic:   ");

	for (index = 0; index < 16; index++)
	{
		printf("%02x", header.e_ident[index]);

		if (index == 15)
			printf("\n");
		else
			printf(" ");
	}
}

/**
 * print_class - Prints the class of an ELF header.
 * @header: An Elf32_Ehdr header struct.
 */
void print_class(Elf32_Ehdr header)
{
	int spaces = 28;

	printf("  Class:");
	while (spaces-- >= 0)
		printf(" ");

	if (header.e_ident[EI_CLASS] == ELFCLASSNONE)
		printf("<unknown %d>\n", header.e_ident[EI_CLASS]);

	else if (header.e_ident[EI_CLASS] == ELFCLASS32)
		printf("%s\n", "ELF32");

	else
		printf("%s\n", "ELF64");
}

/**
 * print_data - Prints the data of an ELF header.
 * @header: An ELF32_Ehdr header struct.
 */
void print_data(Elf32_Ehdr header)
{
	int spaces = 29;

	printf("  Data:");
	while (spaces-- >= 0)
		printf(" ");

	if (header.e_ident[EI_DATA] == ELFDATANONE)
		printf("<unknown: %d>\n", header.e_ident[EI_DATA]);

	else if (header.e_ident[EI_DATA] == ELFDATA2LSB)
		printf("%s\n", "2's complement, little endian");

	else
		printf("%s\n", "2's complement, big endian");
}

/**
 * print_version - Prints the version of an ELF header.
 * @header: An ELF32_Ehdr header struct.
 */
void print_version(Elf32_Ehdr header)
{
	int spaces = 26;

	printf("  Version:");
	while (spaces-- >= 0)
		printf(" ");

	if (header.e_ident[EI_VERSION] == EV_NONE)
		printf("<unknown: %d>\n", header.e_ident[EI_VERSION]);

	else
		printf("1 (current)\n");
}

/**
 * print_osabi - Prints the OS/ABI of an ELF header.
 * @header: An ELF32_Ehdr header struct.
 */
void print_osabi(Elf32_Ehdr header)
{
	int spaces = 27;

	printf("  OS/ABI:");
	while (spaces-- >= 0)
		printf(" ");

	if (header.e_ident[EI_OSABI] == ELFOSABI_NONE ||
	    header.e_ident[EI_OSABI] == ELFOSABI_SYSV)
		printf("UNIX - System V\n");

	else if (header.e_ident[EI_OSABI] == ELFOSABI_HPUX)
		printf("UNIX - HP-UX\n");

	else if (header.e_ident[EI_OSABI] == ELFOSABI_NETBSD)
		printf("UNIX - NetBSD\n");

	else if (header.e_ident[EI_OSABI] == ELFOSABI_LINUX)
		printf("UNIX - Linux\n");

	else if (header.e_ident[EI_OSABI] == ELFOSABI_SOLARIS)
		printf("UNIX - Solaris\n");

	else if (header.e_ident[EI_OSABI] == ELFOSABI_IRIX)
		printf("UNIX - IRIX\n");

	else if (header.e_ident[EI_OSABI] == ELFOSABI_FREEBSD)
		printf("UNIX - FreeBSD\n");

	else if (header.e_ident[EI_OSABI] == ELFOSABI_TRU64)
		printf("UNIX - TRU64 UNIX\n");

	else if (header.e_ident[EI_OSABI] == ELFOSABI_ARM)
		printf("UNIX - ARM architecture\n");

	else
		printf("<unknown: %d>\n", header.e_ident[EI_OSABI]);
}

/**
 * print_abi - Prints the ABI version of an ELF header.
 * @header: An ELF32_Ehdr header struct.
 */
void print_abi(Elf32_Ehdr header)
{
	int spaces = 22;

	printf("  ABI Version:");
	while (spaces-- >= 0)
		printf(" ");

	printf("%d\n", header.e_ident[EI_ABIVERSION]);
}

/**
 * print_type - Prints the type of an ELF header.
 * @header: An Elf32_Ehdr header struct.
 */
void print_type(Elf32_Ehdr header)
{
	int spaces = 29;

	printf("  Type:");
	while (spaces-- >= 0)
		printf(" ");

	if (header.e_type == ET_NONE)
		printf("<unknown %d>\n", header.e_type);

	else if (header.e_type == ET_REL)
		printf("REL (Relocatable file)\n");

	else if (header.e_type == ET_EXEC)
		printf("EXEC (Executable file)\n");

	else if (header.e_type == ET_DYN)
		printf("DYN (Shared object file)\n");

	else if (header.e_type == ET_CORE)
		printf("CORE (Core file)\n");
}

/**
 * print_entry - Prints the entry point of an ELF header.
 * @header: AN Elf32_Ehdr header struct.
 */
void print_entry(Elf32_Ehdr header)
{
	int spaces = 14;
	unsigned long int address = header.e_entry;

	printf("  Entry point address:");
	while (spaces-- >= 0)
		printf(" ");

	printf("%#lx\n", address);
}

/**
 * main - Displays the information contained in the
 *        ELF header at the start of an ELF file.
 * @argc: The number of arguments supplied to the program.
 * @argv: An array of pointers to the arguments.
 *
 * Return: 0 on success.
 *
 * Description: If the function fails or the file
 *              is not an ELF file - exit code 98.
 */
int main(int __attribute__((__unused__)) argc, char *argv[])
{
	Elf32_Ehdr header;
	int o, r;

	o = open(argv[1], O_RDONLY);
	if (o == -1)
	{
		dprintf(STDERR_FILENO,
			"Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}

	r = read(o, &header, sizeof(Elf32_Ehdr));
	if (r == -1)
	{
		dprintf(STDERR_FILENO,
			"Error: `%s`: No such file\n", argv[1]);
		exit(98);
	}

	check_elf(header);

	printf("ELF Header:\n");
	print_magic(header);
	print_class(header);
	print_data(header);
	print_version(header);
	print_osabi(header);
	print_abi(header);
	print_type(header);
	print_entry(header);

	close(o);

	return (0);
}
