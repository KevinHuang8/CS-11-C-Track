#include <stdio.h>

int foo(int x, int y){
	x = 50;
	printf("x == %d\n", x);
	printf("y == %d\n", y);
}

int bar(int arr[]){
	arr[0] = 999;
}

int main(void) {
	int x = 0;
	int y = x;
	x = 5;
	//foo(x, y);

	int a[5];
	a[0] = 20;

	printf("%d\n", a[0]);
	bar(a);
	printf("%d", a[0]);

	return 0;
}
