#include<stdio.h>
#include<string.h>
int main() {
	char str[100];
	int cnt = 0;

	printf("텍스트를 입력하시오:");
	gets(str);

	for (int i = 0; i < strlen(str); i++) {
		if (str[i] == 32)
			cnt++;
	}
	printf("단어의 개수:%d", cnt+1);
	return 0;
}
