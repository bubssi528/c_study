/*2018-10-09 ������
������������ �Ǳ��� ���ϴ� �ڵ�*/

#include <stdio.h>
#include <math.h>
int main(void)
{
	int a, b, c;
	double conclude, result, sil1, sil2;

	printf("��� a�� �Է��ؼ�����: ");
	scanf("%d", &a);
	printf("��� b�� �Է��ؼ�����: ");
	scanf("%d", &b);
	printf("��� c�� �Է��ؼ�����: ");
	scanf("%d", &c);

	conclude = b * b - 4 * a*c;
	result = sqrt(conclude);
	printf("�Ǻ����� ��:%lf", result);
	if (result < 0)
		printf("�Ǳ��� �������� �ʽ��ϴ�.");

	else
	{
		sil1 = (-1 * b + result) / (2 * a);
		sil2 = (-1 * b - result) / (2 * a);
		printf("���� ������������ �Ǳ��� %lf�� %lf�Դϴ�.", sil1, sil2);

	}

	return 0;
}