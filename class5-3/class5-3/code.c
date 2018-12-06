/* 사용자로부터 입력받은 정수가 홀수인지 짝수인지 말해주는 프로그램*/

#include <stdio.h>
int main(void)
{
	int number;

	printf("정수를 입력하시오:");
	scanf("%d", &number);

	if (number % 2 == 0)   //number를 2로 나눈 나머지가 0이면 짝수이다.
		printf("입력된 정수는 짝수입니다.");
	else                   //그렇지 않으면 홀수이다.
		printf("입력된 정수는 홀수입니다.");

	return 0;



}