/*2018-10-18 조현동
 result = 1.5*x + 3.0*y를 계산하는 프로그램*/
#include <stdio.h>

double F(double x, double y);
int main(void) {
	double x, y;
	double result;
	printf("x와 y를 입력하시오:");
	scanf("%lf %lf", &x, &y);
	result = F(x, y);

	printf("x=%lf, y=%lf, f(x,y)=%lf", x, y, result);
}

double F(double x, double y) {
	double result = 1.5*x + 3.0*y;
	return result;
}