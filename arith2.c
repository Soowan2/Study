#include<stdio.h>

int main(void) {

	int i = 10;
	int* pi = &i;

	printf("i = %d, pi = %p\n", i, pi);
	(*pi)++; // pi�� �ּҰ� ����Ų ���� ������
	printf("i = %d, pi = %p\n", i, pi);

	printf("i = %d, pi = %p\n", i, pi);
	*pi++; // pi�� �ּҰ��� ����
	printf("i = %d, pi = %p\n", i, pi);
	

	return 0;
}