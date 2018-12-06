//2018-11-15 조현동 배열의 앞과 뒤를 가르키는 포인터 변수 두 개를 선언해서 이를 활용하여 저장된 값의 순서를 뒤바꿔야 한다.

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