#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
	// char input[32];
	char input[1024];
	int num = 0x401d50;
	char *str = (char *)(&num);
	strcpy(input, str);
	strcat(input, "\0");
	//input = input + "\0";
	// fgets(input, 32, stdin);
	printf("%s \n", input);
	//(void)input;
	return 0;
}
