#include<stdio.h>

int main(void) {

	int x = 10, y = 20;
	int* p;

	p = &x;
	printf("p = %d\n", p); // x�� �ּҰ�
	printf("*p = %d\n\n", *p); // 10

	p = &y;
	printf("p = %d\n", p); // y�� �ּҰ�
	printf("*p = %d\n", *p); // 20

	return 0;
}