#include<stdio.h>
#include<string.h>
int main() {
	char str[100];
	int k = 0;
	int size = 0;

	printf("텍스트를 입력하시오:");
	gets(str);
	size = strlen(str);

	if (str[0] >= 97 && str[0] <= 122)
		str[0] = str[0] - 32;

	if (str[size - 1] != 46) {
		str[size] = 46;
		str[size+ 1] = NULL;
	}
	printf("수정된 텍스트:%s", str);
	return 0;
}