/*2018-10-12 ������
������ ȭ���� ȭ���� ������ ��ȯ�ϴ� ���α׷�*/
#include <stdio.h>
double Fahtocel(double num);
double Celtofah(double num);
double Read(void);
int main(void) {
	double cel, fah;
	printf("������ �Է����ּ���:");
	cel = Read();
	printf("ȭ���� �Է����ּ���:");
	fah = Read();
	cel = Celtofah(cel);
	fah = Fahtocel(fah);
	
	printf("���� -> ȭ��:%lf", cel);
	printf("ȭ�� -> ����:%lf", fah);
}

double Fahtocel(double num)
{
	num = num / 1.8 - 32;
	return num;
}

double Celtofah(double num) {
	num = num * 1.8 + 32;
	return num;
}

double Read(void) {
	double num;
	scanf("%lf", &num);
	return num;
}