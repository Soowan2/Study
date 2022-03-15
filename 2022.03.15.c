#include<stdio.h>
#define _CRT_SECURE_NO_WARNINGS

int main(void) {

	char answer;
	int sit;
	int chair[10] = { 0 };

	printf("좌석을 예약하시겠습니까?(y또는n) : ");
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

			printf("\n몇번째 좌석을 예약하시겠습니까?");
			scanf_s("%d", &sit);
			if (chair[sit - 1] == 1)
			{
				printf("이미 예약된 자리입니다. 다른 자리를 선택하세요\n");
			}
			else
			{
				++chair[sit - 1];
				printf("예약되었습니다 \n");
			}
		}
	}
	
	

	return 0;
}