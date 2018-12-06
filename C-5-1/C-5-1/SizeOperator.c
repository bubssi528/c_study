// 자신이 사용하는 컴파일러에서의 자료형 별 바이트 크기를 확인하기 위한 코드//


#include <stdio.h>

int main(void)
{
	char ch = 9;
	int inum = 1052;
	double dnum = 3.1415;

	printf("변수 ch의 크기: %d \n", sizeof(ch));
	printf("변수 inum의 크기: %d \n", sizeof(inum));
	printf("변수 dnum의 크기: %d \n", sizeof(dnum));

	printf("char의 크기: %d \n", sizeof(char));
	printf("int의 크기: %d \n", sizeof(int));
	printf("long의 크기: %d \n", sizeof(long));
	printf("long long의 크기: %d \n", sizeof(long long));
	printf("float의 크기: %d \n", sizeof(float));
	printf("double의 크기: %d \n", sizeof(double));
	return 0;
}