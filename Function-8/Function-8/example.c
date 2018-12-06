/*2018-10-11 조현동*/


#include <stdio.h>
#define SIZE 5

int main(void) {
	int i, av = 0;
	int scores[SIZE];
	for (i = 0; i < SIZE; i++)
	{
		printf("성적을 입력해주세요:");
		scanf("%d", &scores[i]);
        av += scores[i];
	}
	av = av / SIZE;
	printf("%d", av);
	return 0;
}