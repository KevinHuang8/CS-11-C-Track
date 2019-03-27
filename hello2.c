#include <stdio.h>

int main(void) {
	char name[100];
	printf("Please enter your name: \n");
	scanf("%99s", name);
	
	printf("Hello, ");
	printf(name);
	printf("\n");
	return 0;
}
