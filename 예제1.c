#include<stdio.h>

int main(void) {

	int i = 3000;
	int* p = NULL;

	p = &i;

	printf("p = %u\n", p); // i의 주소값
	printf("&i = %u\n\n", &i); // i의 주소값

	printf("i = %d\n", i); // 3000
	printf("*p = %d\n", *p); // 3000





	return 0;
}