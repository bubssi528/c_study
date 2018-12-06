//프로그램 사용자로부터  알파벳 문자를 입력받아 이에 해당하는 아스키 코드값을 출력하는 프로그램//


#include <stdio.h>
int main(void)
{
	char num1 = 0;
	printf("알파벳을 입력하세요:");
	scanf("%c", &num1);

	printf("%d", num1);

	return 0;

}