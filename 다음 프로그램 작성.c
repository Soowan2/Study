#include<stdio.h>

int main(void) {

	char c = '*';

	char* p;

	p = &c;

	printf("������ ���� p�� ������ �ִ� �ּ� : %u\n", p);
	printf("p�� ����Ű�� �ּҿ� ����� ���� �ƽ�Ű �ڵ� : %d\n", *p);
	printf("p�� ����Ű�� �ּҿ� ����� �� : %c\n", *p);
		
	return 0;
}