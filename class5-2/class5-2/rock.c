/* ����ڰ� �Է��� �µ��� �Ǵ��Ͽ� �������� �������� Ȯ�����ִ� ���α׷�*/

#include <stdio.h>
int main(void) {
	int temperature;

	printf("�µ��� �Է��ϼ���:");
	scanf("%d", &temperature);

	if (temprature > 0) {  //temprature�� �������� Ȯ��
		printf("������ �����Դϴ�.\n");

	else                   //temperature�� 0�����̸� �Ʒ� ������ ����
		printf("������ �����Դϴ�.\n");

	printf("������ �µ��� %d���Դϴ�.\n", temperature); //�׻� ����
	return 0;

	}
	
	
}