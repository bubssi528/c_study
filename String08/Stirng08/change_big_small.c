#include<stdio.h>
#include<string.h>
int main() {
	char str[100];
	int k = 0;
	
	printf("텍스트를 입력하시오:");
	gets(str);
	
	for (int i = 0; i < strlen(str); i++){
		if(str[i] >= 65 && str[i] <= 90		
			str[i] = str[i] + 32;
	}
	printf("소문자 출력: %s", str);
	return 0;