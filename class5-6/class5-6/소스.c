/*����ڰ� �Է��� ������ 0���� 100���������� �˻��ϴ� ���α׷�*/

#include <stdio.h>
int main(void)
{
	int number;

	printf("������ �Է��Ͻÿ�:");
	scanf("%d", &number);

	if (number >= 0 && number <= 100) {
		printf("�Է��� ������ 0���� 100���̿� �ֽ��ϴ�.");
	}
	else
		printf("�Է��� ������ 0���� 100���̰� �ƴմϴ�.");

	return 0;

}