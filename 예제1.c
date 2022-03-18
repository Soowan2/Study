#include<stdio.h>

int main(void) {

	int i = 3000;
	int* p = NULL;

	p = &i;

	printf("p = %u\n", p); // i狼 林家蔼
	printf("&i = %u\n\n", &i); // i狼 林家蔼

	printf("i = %d\n", i); // 3000
	printf("*p = %d\n", *p); // 3000





	return 0;
}