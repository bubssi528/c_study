/*2018-10-12 Á¶Çöµ¿
¼·¾¾¸¦ È­¾¾·Î È­¾¾¸¦ ¼·¾¾·Î º¯È¯ÇÏ´Â ÇÁ·Î±×·¥*/
#include <stdio.h>
double Fahtocel(double num);
double Celtofah(double num);
double Read(void);
int main(void) {
	double cel, fah;
	printf("¼·¾¾¸¦ ÀÔ·ÂÇØÁÖ¼¼¿ä:");
	cel = Read();
	printf("È­¾¾¸¦ ÀÔ·ÂÇØÁÖ¼¼¿ä:");
	fah = Read();
	cel = Celtofah(cel);
	fah = Fahtocel(fah);
	
	printf("¼·¾¾ -> È­¾¾:%lf", cel);
	printf("È­¾¾ -> ¼·¾¾:%lf", fah);
}

double Fahtocel(double num)
{
	num = num / 1.8 - 32;
	return num;
}

double Celtofah(double num) {
	num = num * 1.8 + 32;
	return num;
}

double Read(void) {
	double num;
	scanf("%lf", &num);
	return num;
}