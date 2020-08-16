#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
	int num;
	printf("Input number : ");
	scanf("%d",&num);
	if (num % 2 == 0) printf("%d is an even integer", num);
	else printf("%d is an odd integer", num);
}