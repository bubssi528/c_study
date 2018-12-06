/*사용자가 입력한 정수가 0에서 100사이인지를 검사하는 프로그램*/

#include <stdio.h>
int main(void)
{
	int number;

	printf("정수를 입력하시오:");
	scanf("%d", &number);

	if (number >= 0 && number <= 100) {
		printf("입력한 정수가 0에서 100사이에 있습니다.");
	}
	else
		printf("입력한 정수가 0에서 100사이가 아닙니다.");

	return 0;

}