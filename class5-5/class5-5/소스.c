/* 사용자로부터 2개의 정수를 입력받아 큰수와 작은수를 출력하는 프로그램*/

#include <stdio.h>
int main(void) {
	int x, y;

	printf("첫번째 수=");
	scanf("%d", &x);

	printf("두번째 수=");
	scanf("%d", &y);

	printf("큰수=%d", (x > y) ? x : y);
	printf("작은수=%d", (x < y) ? x : y);

	return 0;
}