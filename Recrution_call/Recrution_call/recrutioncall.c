/*2018-10-18 ������
��ȯ���� ���丮�� �Լ� ��� ���α׷�*/

#include<stdio.h>

int factorial(int n);
int main(void) {
	int x = 0, result;
	printf("������ �Է��ϼ���:");
	scanf("%d", &x);

	result = factorial(x);
	printf("%d!�� %d�Դϴ�.", x, result);

	return 0;
}

int factorial(int n)
{
	printf("factorial<%d>\n", n);

	if (n <= 1) return 1;
	else return n * factorial(n - 1);
}