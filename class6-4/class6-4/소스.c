/*2018-10-04������
�ݺ� ������ �̿��Ͽ� 1���� 1000������ ���� ���ϴ� �ڵ�*/

#include <stdio.h>
int main(void) {
	int i, sum;

	i = 1;
	sum = 0;
	while (i <= 1000)
	{
		sum += i;
		i++;
	}
	printf("���� %d�Դϴ�.\n", sum);
	return 0;
}