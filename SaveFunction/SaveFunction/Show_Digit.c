#include <stdio.h>
void Show(int x);
int main(void) {
	int x = 0;
	printf("������ �Է��ϼ���: ");
	scanf("%d", &x);
	Show(x);
	return 0;
}
void Show(int x) {
	if (x == 0) return;
	Show(x/10);
	printf(" %d", x % 10);
}