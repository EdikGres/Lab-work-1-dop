#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
/*
	ƒоп к 1-ой лабе.
	„исло размещений.

*/
static long long factorial(int n);
int get_integer(const char* msg);

int main() {
	int n = 0;
	int k = 0;
	n = get_integer("input n: ");
	k = get_integer("input k: ");

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
int get_integer(const char* msg) {
	char answer[256]; // строка дл€ чтени€
	int n; // итоговое целое число

	printf("%s", msg); // выводим приглашение ко вводу
	fgets(answer, sizeof(answer), stdin); // считываем строку

	// пока не будет считано целое число
	while (sscanf(answer, "%d", &n) != 1) {
		printf("Incorrect input. Try again: "); // выводим сообщение об ошибке
		fgets(answer, sizeof(answer), stdin); // и заново считываем строку
	}

	return n; // возвращаем корректное целое число
}