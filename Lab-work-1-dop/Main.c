#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
/*
	Доп к 1-ой лабе.
	Число размещений.

*/
static long long factorial(int n);

int main() {
	int n = 0;
	int k = 0;
	printf("input n: ");
	scanf("%d", &n);

	printf("input k: ");
	scanf("%d", &k);
	
	long long result = factorial(n) / factorial(n - k);

	printf("number of placements: %I64d", result);
	
	



	return 0;
}






static long long factorial(int n) {
	long long result = 1;

	for (; n != 0; n--)
	{
		result *= n;
	}

	return result;

}