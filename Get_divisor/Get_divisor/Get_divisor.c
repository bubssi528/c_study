/*2018-10-18 조현동
 주어진 정수의 약수를 모두 찾아내는 프로그램*/
void Get_divisor(int num);

#include <stdio.h>
int main(void) {
	printf("8의 약수=");
	Get_divisor(8);
}
void Get_divisor(int num) {
	for (int a = 1; a <= num; a++) {
		if (num%a == 0) {
			printf(" %d", a);
		}
	}
	return;
}