#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>
#include <elf.h>

/**
 * print_magic - prints the magic bytes of the ELF header.
 * @e_ident: A pointer to the e_ident array of the ELF header.
 */
void print_magic(unsigned char *e_ident)
{
    int i; /* Declare i at the beginning of the function */
    printf("  Magic:   ");
    for (i = 0; i < EI_NIDENT; i++) /* Don't declare i in the loop */
        printf("%02x ", e_ident[i]);
    printf("\n");
}

/**
 * print_class - prints the class of the ELF file.
 * @e_class: The class (architecture) of the ELF file.
 */
void print_class(unsigned char e_class)
{
    printf("  Class:                             ");
    switch (e_class)
    {
    case ELFCLASS32:
        printf("ELF32\n");
        break;
    case ELFCLASS64:
        printf("ELF64\n");
        break;
    default:
        printf("Unknown\n");
    }
}

/**
 * print_data - prints the data encoding of the ELF file.
 * @e_data: The data encoding of the ELF file.
 */
void print_data(unsigned char e_data)
{
    printf("  Data:                              ");
    switch (e_data)
    {
    case ELFDATA2LSB:
        printf("2's complement, little endian\n");
        break;
    case ELFDATA2MSB:
        printf("2's complement, big endian\n");
        break;
    default:
        printf("Unknown\n");
    }
}

/**
 * main - Entry point, opens and reads an ELF file and prints
 *        the information contained in its ELF header.
 * @argc: The number of command-line arguments.
 * @argv: The array of command-line arguments.
 *
 * Return: 0 on success, 98 on error.
 */
int main(int argc, char *argv[])
{
    int fd; /* Declare fd at the beginning of the function */
    Elf64_Ehdr ehdr; /* Declare ehdr at the beginning of the function */

    if (argc != 2)
    {
        fprintf(stderr, "Usage: elf_header elf_filename\n");
        exit(98);
    }

    fd = open(argv[1], O_RDONLY); /* Assign fd here */
    if (fd == -1)
    {
        perror("Error opening file");
        exit(98);
    }

    if (read(fd, &ehdr, sizeof(ehdr)) != sizeof(ehdr)) /* Assign ehdr here */
    {
        perror("Error reading ELF header");
        close(fd);
        exit(98);
    }

    if (ehdr.e_ident[EI_MAG0] != ELFMAG0 || ehdr.e_ident[EI_MAG1] != ELFMAG1 ||
        ehdr.e_ident[EI_MAG2] != ELFMAG2 || ehdr.e_ident[EI_MAG3] != ELFMAG3)
    {
        fprintf(stderr, "Not an ELF file\n");
        close(fd);
        exit(98);
    }

    printf("ELF Header:\n");
    print_magic(ehdr.e_ident);
    print_class(ehdr.e_ident[EI_CLASS]);
    print_data(ehdr.e_ident[EI_DATA]);
    /* ... Additional ELF header fields ... */

    close(fd);
    return (0);
}
