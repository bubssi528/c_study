// ���α׷� ����ڷκ��� �� ���� �Ǽ��� �Է¹޾Ƽ� double�� ������ �����ϰ�//
//��Ģ���� ����� ����ϴ� ���α׷�//

#include <stdio.h>
int main(void) {

	double num1, num2 = 0.0;
	double result1, result2, result3, result4;

	printf("�� ���� �Ǽ��� �Է��ϼ���:");
	scanf("%lf %lf", &num1, &num2);

	result1 = num1 + num2;
	result2 = num1 - num2;
	result3 = num1 * num2;
	result4 = num1 / num2;

	printf("���ϱ�: %f", result1);
	printf("����: %f",result2);
	printf("���ϱ�: %f", result3);
	printf("������: %f", result4);

	return 0;
}