/*2018-10-18 ������
 result = 1.5*x + 3.0*y�� ����ϴ� ���α׷�*/
#include <stdio.h>

double F(double x, double y);
int main(void) {
	double x, y;
	double result;
	printf("x�� y�� �Է��Ͻÿ�:");
	scanf("%lf %lf", &x, &y);
	result = F(x, y);

	printf("x=%lf, y=%lf, f(x,y)=%lf", x, y, result);
}

double F(double x, double y) {
	double result = 1.5*x + 3.0*y;
	return result;
}