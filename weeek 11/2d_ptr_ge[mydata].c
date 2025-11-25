#include <stdio.h>
#include <malloc.h>

void GetMyData(int** q) {
	*q = (int*)malloc(8);
}

int main(void) {
	int* p;
	GetMyData(&p);
	*p = 5;

	printf("p (주소): %d\t", p);
	printf("p (값): %d\n", *p);

	free(p);
}