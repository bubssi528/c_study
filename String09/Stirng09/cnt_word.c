#include<stdio.h>
#include<string.h>
int main() {
	char str[100];
	int cnt = 0;

	printf("�ؽ�Ʈ�� �Է��Ͻÿ�:");
	gets(str);

	for (int i = 0; i < strlen(str); i++) {
		if (str[i] == 32)
			cnt++;
	}
	printf("�ܾ��� ����:%d", cnt+1);
	return 0;
}
