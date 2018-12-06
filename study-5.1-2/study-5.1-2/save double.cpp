// 프로그램 사용자로부터 두 개의 실수를 입력받아서 double형 변수에 저장하고//
//사칙연산 결과를 출력하는 프로그램//

#include <stdio.h>
int main(void) {

	double num1, num2 = 0.0;
	double result1, result2, result3, result4;

	printf("두 개의 실수를 입력하세요:");
	scanf("%lf %lf", &num1, &num2);

	result1 = num1 + num2;
	result2 = num1 - num2;
	result3 = num1 * num2;
	result4 = num1 / num2;

	printf("더하기: %f", result1);
	printf("빼기: %f",result2);
	printf("곱하기: %f", result3);
	printf("나누기: %f", result4);

	return 0;
}