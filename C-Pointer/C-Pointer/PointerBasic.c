//2018-11-08 조현동 포인터 기초공부

#include <stdio.h>
int main() {
	char str[10];
	int i = 0, cnt = 0;
    printf("단어를 입력해주세요:");
	scanf("%s", str);

	for (;;) {
		if (str[i] == NULL)
			break;
		else
			cnt++;

		i++;
	}
	printf("단어의 길이는 %d입니다.", cnt);
	return 0;
}

#include <stdio.h>
int main() {
	char str[10];
	char temp;
	int i = 0, cnt = 0;
    
	printf("단어를 입력해주세요:");
	scanf("%s", str);
	
	for (;;) {
		if (str[i] == NULL)
			break;
		else
			cnt++;

		i++;
	}
	for (int a = 0; a < (cnt-1)/2; a++) {
		temp = str[a];
		str[a] = str[cnt-1];
		str[cnt-1] = temp;
		cnt--;
	}
	printf("%s", str);
	return 0;
}

#include <stdio.h>
int main() {
	int num1 = 10;
	int *ptr1 = &num1;
	int *ptr2 = ptr1;

	(*ptr1)++;
	(*ptr2)++;
	printf("%d\n", num1);
	return 0;

}

#include <stdio.h>
int main() {
	int num1 = 10, num2 = 20;
	int *ptr1 = &num1, *ptr2 = &num2;

	*ptr1 += 10;
	*ptr2 -= 10;
	ptr1 = &num2;
	ptr2 = &num1;

	printf("%d %d", *ptr1,*ptr2);
	return 0;
}
#include <stdio.h>
int main() {
	int arr[3] = { 15,25,35 };
	int *ptr = &arr[0];

	printf("%d %d \n", ptr[0], arr[0]);
	printf("%d %d \n", ptr[1], arr[1]);
	printf("%d %d \n", ptr[2], arr[2]);
	printf("%d %d \n", *ptr, *arr);
	return 0;
}
#include <stdio.h>
int main() {
	int *ptr1 = 0x0010;
	double *ptr2 = 0x0010;

	printf("%p %p\n", ptr1 + 1, ptr1 + 2);
	printf("%p %p\n", ptr2 + 1, ptr2 + 2);

	printf("%p %p\n", ptr1, ptr2);
	ptr1 ++ ;
	ptr2 ++ ;
	printf("%p %p\n", ptr1, ptr2);
	return 0;

}

#include <stdio.h>
int main() {
	int arr[6] = { 1,2,3,4,5 };
	int *ptr = arr + 4;
	int sum = 0;
	for (int k = 4; k >= 0; k--) {
		printf("%d\n", *ptr);
		sum += *ptr;
		ptr--;
		
	}
	printf("%d", sum);
	return 0;
}

