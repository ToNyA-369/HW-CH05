﻿#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int a = 7;
	int *aPtr = &a;
	printf("The address of a is %p\n", &a);
	printf("The value of aPtr is %p\n", aPtr);
	printf("\nThe value of a is %d\n", a);
	printf("The value of *aPtr is %d\n", *aPtr);
	printf("\nShowing that * and & are complements of ");
	printf("each other\n&*aPtr = %p\n", &*aPtr);
	printf("*&aPtr = %p\n", *&aPtr);
	system("pause");
	return 0;
}