/*2018-10-11 ������
������ ���ڸ� ���޹޾Ƽ� ����ū���� ���� ��������  ��ȯ�ϴ� ���α׷�*/

int Read(void);
int Big(int num1, int num2);
int Small(int num1, int num2);

#include <stdio.h>
int main(void) {
	int num1, num2, num3;
	int max, min;
	printf("������ ������ �Է��ϼ���:");
	num1 = Read();
	num2 = Read();
	num3 = Read();
	max = Big(num1, num2);
	min = Small(num1, num2);
	max = Big(max, num3);
	min = Small(min, num3);
	printf("���� ū����:%d�̰� ���� ���� ����:%d�Դϴ�.", max, min);
	return 0;
}

int Read(void) {
	int num;
	scanf("%d", &num);
	return num;
}

int Big(int num1, int num2)
{
	if (num1 > num2)
		return num1;
	else
		return num2;
}
int Small(int num1, int num2)
{
	if (num1 < num2)
		return num1;
	else
		return num2;
}