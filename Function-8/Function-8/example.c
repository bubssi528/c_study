/*2018-10-11 ������*/


#include <stdio.h>
#define SIZE 5

int main(void) {
	int i, av = 0;
	int scores[SIZE];
	for (i = 0; i < SIZE; i++)
	{
		printf("������ �Է����ּ���:");
		scanf("%d", &scores[i]);
        av += scores[i];
	}
	av = av / SIZE;
	printf("%d", av);
	return 0;
}