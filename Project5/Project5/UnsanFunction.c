#include <stdio.h>
int Unsan(int x, int y, int sign);
int cnt1=0, cnt2=0, cnt3=0, cnt4=0;
int main(void) {
	int num1=0, num2=0, result=0;
	char sign;
	for (;;) {
		printf("������ �Է��Ͻÿ�(����� Ctrl+c):");
		scanf(" %d%c%d", &num1, &sign, &num2);
		switch (sign) {
		case '+': result=Unsan(num1, num2,1);
			printf("������ ��%d�� ȣ��Ǿ����ϴ�.\n", cnt1);
			printf("���� ���:%d\n", result);
			break;
		case '-': result=Unsan(num1, num2, 2);
			printf("������ ��%d�� ȣ��Ǿ����ϴ�.\n", cnt2);
			printf("���� ���:%d\n", result);
			break;
		case '/': result=Unsan(num1, num2, 3);
			printf("�������� ��%d�� ȣ��Ǿ����ϴ�.\n", cnt3);
			printf("���� ���:%d\n", result);
			break;
		case '*': result=Unsan(num1, num2, 4);
			printf("������ ��%d�� ȣ��Ǿ����ϴ�.\n", cnt4);
			printf("���� ���:%d\n", result);
			break;
		}
		
	}
	return 0;
}
int Unsan(int x, int y, int sign) {
	int result;
	switch (sign) {
	case 1: result = x + y;
		cnt1 += 1;
		break;
	case 2: result = x - y;
		cnt2 += 1;
		break;
	case 3: result = x / y;
		cnt3 += 1;
		break;
	case 4: result = x * y;
		cnt4 += 1;
		break;
	}
	return result;