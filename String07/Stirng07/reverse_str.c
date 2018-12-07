#include<stdio.h>
#include<string.h>
int main() {
	char str[100];
	char reverse[100];
	int k = 0;
	char cmp;
	
	printf("텍스트를 입력하시오:");
	gets(str);

	strcpy(reverse,str);
	
	for (int i = 0, j=strlen(str)-1; i < strlen(str); i++, j--){
		str[i] = reverse[j];
	}
	printf("역순: %s", str);
	return 0;
}