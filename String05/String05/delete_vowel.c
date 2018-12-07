#include<stdio.h>
#include<string.h>
int main() {
	char str[100];
	char check[] = { 'a','e','i','o','u' };
	int k = 0;
	char cmp;
	printf("텍스트를 입력하시오:");
	gets(str);

	for (int i = 0; i < strlen(str); i++) {
		for (int j = 0; j<strlen(str); j++) {
			cmp = check[j];
			if (str[i]==cmp || str[i]==(cmp - 32)) {
				k = i;
				str[i] = NULL;
				while (str[k + 1] != NULL) {
					str[k] = str[k + 1];
					k++;
				}
				str[k] = NULL;
				i--;
			}
		}
	}
	printf("모음이 제거된 텍스트: %s", str);
	return 0;
}