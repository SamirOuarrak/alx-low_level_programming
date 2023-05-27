#include <elf.h>
#include "main.h"

/**
 * _check- _check
 * @_ident: the ELF struct
 * return: no return is a void func.
 */
void _check(unsigned char *_ident)
{
	if (*(_ident) == 0x7f && *(_ident + 1) == 'E' &&
	    *(_ident + 2) == 'L' && *(_ident + 3) == 'F')
		printf("ELF Header:\n");
	else
	{
		dprintf(STDERR_FILENO, "Error: this file not is a valid ELF\n");
		exit(98);
	}
}

/**
 * _magic - magic
 * @_ident: the ELF struct
 * return: no return is a void func.
 */
void _magic(unsigned char *_ident)
{
	int i;
	int lim;

	lim = EI_NIDENT - 1;
	printf("  Magic:   ");
	for (i = 0; i < lim; i++)
		printf("%02x ", *(_ident + i));
	printf("%02x\n", *(_ident + i));
}
/**
 * _class - _class
 * @_ident: the ELF struct
 * return: no return is a void func.
 */
void _class(unsigned char *_ident)
{
	printf("  Class:                             ");
	if (_ident[EI_CLASS] == ELFCLASSNONE)
		printf("This class is invalid\n");
	else if (_ident[EI_CLASS] == ELFCLASS32)
		printf("ELF32\n");
	else if (_ident[EI_CLASS] == ELFCLASS64)
		printf("ELF64\n");
	else
		printf("<unknown: %x>\n", _ident[EI_CLASS]);
}
/**
 * _data - _data
 * @_ident: the ELF struct
 * return: no return is a void func.
 */
void _data(unsigned char *_ident)
{
	printf("  Data:                              ");
	if (_ident[EI_DATA] == ELFDATANONE)
		printf("Unknown data format\n");
	else if (_ident[EI_DATA] == ELFDATA2LSB)
		printf("2's complement, little endian\n");
	else if (_ident[EI_DATA] == ELFDATA2MSB)
		printf("2's complement, big endian\n");
	else
		printf("<unknown: %x>\n", _ident[EI_DATA]);
}
/**
 * _version - version
 * @_ident: the ELF struct
 * return: no return is a void func.
 */
void _version(unsigned char *_ident)
{
	printf("  Version:                           ");
	if (_ident[EI_VERSION] == EV_CURRENT)
		printf("%i (current)\n", EV_CURRENT);
	else
		printf("%i\n", _ident[EI_VERSION]);
}

/**
 * _osabi - print the osabi
 * @_ident: the ELF struct
 * return: no return is a void func.
 */
void _osabi(unsigned char *_ident)
{
	printf("  OS/ABI:                            ");
	if (_ident[EI_OSABI] == ELFOSABI_SYSV)
		printf("UNIX - System V\n");
	else if (_ident[EI_OSABI] == ELFOSABI_HPUX)
		printf("UNIX - HP-UX\n");
	else if (_ident[EI_OSABI] == ELFOSABI_NETBSD)
		printf("UNIX - NetBSD\n");
	else if (_ident[EI_OSABI] == ELFOSABI_LINUX)
		printf("UNIX - Linux\n");
	else if (_ident[EI_OSABI] == ELFOSABI_SOLARIS)
		printf("UNIX - Solaris\n");
	else if (_ident[EI_OSABI] == ELFOSABI_IRIX)
		printf("UNIX - IRIX\n");
	else if (_ident[EI_OSABI] == ELFOSABI_FREEBSD)
		printf("UNIX - FreeBSD\n");
	else if (_ident[EI_OSABI] == ELFOSABI_TRU64)
		printf("UNIX - TRU64\n");
	else if (_ident[EI_OSABI] == ELFOSABI_ARM)
		printf("ARM\n");
	else if (_ident[EI_OSABI] == ELFOSABI_STANDALONE)
		printf("Standalone App\n");
	else
		printf("<unknown: %x>\n", _ident[EI_OSABI]);
}

/**
 * type - print the type
 * @_ident: the ELF struct
 * @_type: data to compare and print.
 * return: no return is a void func.
 */
void type(unsigned int _type, unsigned char *_ident)
{
	_ident[EI_DATA] == ELFDATA2MSB ? _type = _type >> 8 : _type;

	printf("  Type:                              ");
	if (_type == ET_NONE)
		printf("NONE (Unknown type)\n");
	else if (_type == ET_REL)
		printf("REL (Relocatable file)\n");
	else if (_type == ET_EXEC)
		printf("EXEC (Executable file)\n");
	else if (_type == ET_DYN)
		printf("DYN (Shared object file)\n");
	else if (_type == ET_CORE)
		printf("CORE (Core file)\n");
	else
		printf("<unknown: %x>\n", _type);
}

/**
 * entry - print the entry point
 * @_ident: the ELF struct
 * @e_entry: the data to print
 * return: no return is a void func.
 */
void entry(unsigned int e_entry, unsigned char *_ident)
{
	if (_ident[EI_DATA] == ELFDATA2MSB)
		e_entry = REV(e_entry);

	printf("  Entry point address:               ");
	printf("%#x\n", (unsigned int)e_entry);
}

/**
 * main - read a ELF file.
 * @argc: the number of args
 * @argv: the Args
 * section header: the header of this function is holberton.h
 * Return: 0 in success
 */
int main(int argc, char *argv[])
{
	int fd, _read, _close;
	Elf64_Ehdr *file;

	if (argc > 2 || argc < 2)
		dprintf(STDERR_FILENO, "Usage: error in # of args\n"), exit(98);
	file = malloc(sizeof(Elf64_Ehdr));
	if (file == NULL)
		dprintf(STDERR_FILENO, "error in allocate memory\n"), exit(98);
	fd = open(*(argv + 1), O_RDONLY);
	if (fd == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", *(argv + 1));
		exit(98);
	}
	_read = read(fd, file, sizeof(Elf64_Ehdr));
	if (_read == -1)
	{
		free(file);
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", *(argv + 1));
		exit(98);
	}
	_check(file->e_ident);
	magic(file->e_ident);
	class(file->e_ident);
	data(file->e_ident);
	version(file->e_ident);
	osabi(file->e_ident);
	printf("  ABI Version:                       ");
	printf("%i\n", file->e_ident[EI_ABIVERSION]);
	type(file->e_type, file->e_ident);
	entry(file->e_entry, file->e_ident);
	free(file);
	_close = close(fd);
	if (_close)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd\n");
		exit(98);
	}
	return (0);
}
