#include<stdio.h>

int main(void) {

	char c = '*';

	char* p;

	p = &c;

	printf("포인터 변수 p가 가지고 있는 주소 : %u\n", p);
	printf("p가 가리키는 주소에 저장된 값의 아스키 코드 : %d\n", *p);
	printf("p가 가리키는 주소에 저장된 값 : %c\n", *p);
		
	return 0;
}