// 프로그램 사용자로부터 아스키 코드 값을 정수의 형태로 입력받은 후에 해당 정수의 아스키코드 문자를 출력하는 코드//


#include <stdio.h>
int main(void) {

	char num1 = 0;

	printf("아스키 코드값을 입력하세요:");
	scanf("%d", &num1);

	printf("%c", num1);

	return 0;


}