#include<stdio.h>
#define _CRT_SECURE_NO_WARNINGS

int main(void) {

	char answer;
	int sit;
	int chair[10] = { 0 };

	printf("�¼��� �����Ͻðڽ��ϱ�?(y�Ǵ�n) : ");
	scanf_s("%c", &answer);

	while (1)
	{
		if (answer == 'y')
		{
			printf("----------------------\n");
			printf("1 2 3 4 5 6 7 8 9 10\n");
			printf("----------------------\n");
			for (int i = 0; i < 10; i++)
			{
				printf("%d ", chair[i]);
			}

			printf("\n���° �¼��� �����Ͻðڽ��ϱ�?");
			scanf_s("%d", &sit);
			if (chair[sit - 1] == 1)
			{
				printf("�̹� ����� �ڸ��Դϴ�. �ٸ� �ڸ��� �����ϼ���\n");
			}
			else
			{
				++chair[sit - 1];
				printf("����Ǿ����ϴ� \n");
			}
		}
	}
	
	

	return 0;
}