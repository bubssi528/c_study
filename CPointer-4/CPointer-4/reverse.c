//2018-11-15 ������ �迭�� �հ� �ڸ� ����Ű�� ������ ���� �� ���� �����ؼ� �̸� Ȱ���Ͽ� ����� ���� ������ �ڹٲ�� �Ѵ�.

#include <stdio.h>
int main(void) {
	int arr[6] = { 1,2,3,4,5,6 };
	int *ptr1 = &arr[0];
	int *ptr2 = &arr[5];
	int temp = 0;
	for (int i = 0; i < 3; i++) {
		temp = *ptr1;
		*ptr1 = *ptr2;
		*ptr2 = temp;
		ptr1++;
		ptr2--;
	}
	printf("%d", arr[0]);
	return 0;

}