/*2018-10-18 조현동
순환적인 팩토리얼 함수 계산 프로그램*/

#include<stdio.h>

int factorial(int n);
int main(void) {
	int x = 0, result;
	printf("정수를 입력하세요:");
	scanf("%d", &x);

	result = factorial(x);
	printf("%d!은 %d입니다.", x, result);

	return 0;
}

int factorial(int n)
{
	printf("factorial<%d>\n", n);

	if (n <= 1) return 1;
	else return n * factorial(n - 1);
}