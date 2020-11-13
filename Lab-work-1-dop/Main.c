#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
/*
	��� � 1-�� ����.
	����� ����������.

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
	char answer[256]; // ������ ��� ������
	int n; // �������� ����� �����

	printf("%s", msg); // ������� ����������� �� �����
	fgets(answer, sizeof(answer), stdin); // ��������� ������

	// ���� �� ����� ������� ����� �����
	while (sscanf(answer, "%d", &n) != 1) {
		printf("Incorrect input. Try again: "); // ������� ��������� �� ������
		fgets(answer, sizeof(answer), stdin); // � ������ ��������� ������
	}

	return n; // ���������� ���������� ����� �����
}