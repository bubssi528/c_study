/*2018-10-18 ������
 �μ��߿� �� ū ���� ��ȯ�ϴ� �Լ��� �̿��� ���α׷�*/

#include <stdio.h>
double get_bigger(double x, double y);
int main(void) {
	float fnum1;
	float fnum2;
	double result;

	printf("�Ǽ��� �Է��Ͻÿ�:");
	scanf("%f", &fnum1);
	printf("�Ǽ��� �Է��Ͻÿ�:");
	scanf("%f", &fnum2);
	
	result = get_bigger(fnum1,fnum2);
	printf("�� ū���� %lf",result);
}

double get_bigger(double x, double y) {
	if (x > y) return x;
	else return y;
}