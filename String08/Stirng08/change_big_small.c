#include<stdio.h>
#include<string.h>
int main() {
	char str[100];
	int k = 0;
	
	printf("�ؽ�Ʈ�� �Է��Ͻÿ�:");
	gets(str);
	
	for (int i = 0; i < strlen(str); i++){
		if(str[i] >= 65 && str[i] <= 90		
			str[i] = str[i] + 32;
	}
	printf("�ҹ��� ���: %s", str);
	return 0;