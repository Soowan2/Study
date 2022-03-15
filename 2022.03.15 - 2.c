#include<stdio.h>
#include<stdlib.h>

int main(void) {

	int arr[10] = { 0 };
	int answer;

	printf("---------------------\n");
	printf("1 2 3 4 5 6 7 8 9 10\n");
	printf("---------------------\n");
	for (int i = 0; i < 10; i++)
	{
		arr[i] = rand() % 99;
		printf("%d ", arr[i]);
	}

	for (int i = 0; i < 9; i++)
	{
		if (arr[i] > arr[i + 1]) {
			answer = arr[i + 1];
		}

		else {
			answer = arr[i];
		}
	}

	printf("\n최소값은 %d", answer);




	

	return 0;
}