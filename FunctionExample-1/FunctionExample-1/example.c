/*2018-10-11 조현동
정수 2개를 더해주는 Add함수 프로그램*/


#include <stdio.h>

int Add(int num1, int num2)
{
	return num1 + num2;
}

int main(void) {
	int result;
	result = Add(3, 4);
	printf("덧셈결과1:%d\n", result);
	result = Add(5, 8);
	printf("덧셈결과2: %d\n", result);
	return 0;
}