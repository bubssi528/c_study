#include<stdio.h>
#include<string.h>
int main() {
	char str[100];
	int asci[128] = { 0, };
	
	printf("�ؽ�Ʈ�� �Է��Ͻÿ�:");
	gets(str);

	for (int i = 0; i < strlen(str); i++) {
		asci[str[i]]++;
	}
	for (int i = 0; i < strlen(str); i++) {
		if (asci[str[i]] == 0)
			continue;
		else if(str[i]!=32){
			printf("%c: %d\n", str[i],asci[str[i]]);
			asci[str[i]] = 0;
		}
	}
	return 0;
}