#include<stdio.h>

int main(void) {

	int i = 10;
	int* pi = &i;

	printf("i = %d, pi = %p\n", i, pi);
	(*pi)++; // pi의 주소가 가리킨 값이 증가ㅜ
	printf("i = %d, pi = %p\n", i, pi);

	printf("i = %d, pi = %p\n", i, pi);
	*pi++; // pi의 주소값만 증가
	printf("i = %d, pi = %p\n", i, pi);
	

	return 0;
}