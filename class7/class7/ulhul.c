/*2018-10-11 조현동 
8.함수-printf문이 반환하는 길이 확인 프로그램 */


#include <stdio.h>
int main(void) {
	int num1, num2;
	num1 = printf("12345\n");
	num2 = printf("I lonve my home\n");
	printf("%d %d\n", num1, num2);
	return 0;
}