/*2018-10-18 조현동
순환호출로 합계를 구하는 프로그램*/
#include <stdio.h>


int Sum(int n);

int main(void)
{
	int n, sum = 0;

	printf("정수를 입력하시오:");
	scanf("%d", &n);

	sum = Sum(n);
	printf("0부터 %d까지의 합은 %d입니다.", n, sum);

	return 0;
}
int Sum(int n) {
	if (n <= 1) return 1;
	else return n + Sum(n - 1);
}