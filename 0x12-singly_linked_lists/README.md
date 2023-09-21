# 0x12. Singly Linked Lists

This directory contains programs that demonstrate the implementation and manipulation of singly linked lists in C.
## Files

### lists.h
Header file containing the declaration of the `list_t` structure and the prototypes of all functions used in this project.
## Data Structure

The `list_t` structure represents a node in a singly linked list and is defined as follows:

```c
typedef struct list_s
{
    char *str;
    unsigned int len;
    struct list_s *next;
} list_t;
