#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
int _isalpha(int c){
	return ((c >= 'a' && c <= 'z' ) || (c >= 'A' && c <= 'Z'));
}
