/*2018-10-18 조현동
 두수중에 더 큰 수를 반환하는 함수를 이용한 프로그램*/

#include <stdio.h>
double get_bigger(double x, double y);
int main(void) {
	float fnum1;
	float fnum2;
	double result;

	printf("실수를 입력하시오:");
	scanf("%f", &fnum1);
	printf("실수를 입력하시오:");
	scanf("%f", &fnum2);
	
	result = get_bigger(fnum1,fnum2);
	printf("더 큰수는 %lf",result);
}

double get_bigger(double x, double y) {
	if (x > y) return x;
	else return y;
}