#include<stdio.h>
#include<string.h>
int main() {
	char str[100];
	int cnt = 0;
	int j = 0;
	printf("텍스트를 입력하시오:");
	gets(str);

	for (int i = 0; i < strlen(str); i++){
		if (str[i] == 32) {
			j = i;
			while (str[j] != NULL) {
				str[j] = str[j + 1];
				j++;		
			}
			i--;
		}
	}
	printf("공백을 완전히 제거한 문자열:%s", str);
	return 0;
}