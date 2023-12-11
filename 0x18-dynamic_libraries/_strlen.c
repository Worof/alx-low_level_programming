#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
int _strlen(char *s){
	int length = 0;
	while (s[length]){
		length++;
	}
	return length;
}
