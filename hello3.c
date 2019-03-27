#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void) {
	char name[100];
	int n, i;

	srand(time(0));
	printf("Please enter your name: \n");
	scanf("%99s", name);

	n = rand() % 11;

	for (i = 0; i < n; ++i) {
		if (n % 2 == 0){
			printf("%d: hello, ", n);
		}
		else {
			printf("%d: hi there, ", n);
		}
		printf(name);
		printf("\n");
	}
	return 0;
}
