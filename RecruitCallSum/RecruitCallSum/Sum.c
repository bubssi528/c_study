/*2018-10-18 ������
��ȯȣ��� �հ踦 ���ϴ� ���α׷�*/
#include <stdio.h>


int Sum(int n);

int main(void)
{
	int n, sum = 0;

	printf("������ �Է��Ͻÿ�:");
	scanf("%d", &n);

	sum = Sum(n);
	printf("0���� %d������ ���� %d�Դϴ�.", n, sum);

	return 0;
}
int Sum(int n) {
	if (n <= 1) return 1;
	else return n + Sum(n - 1);
}