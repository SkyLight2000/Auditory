#include "stdafx.h"
#include "stdlib.h"
#include "windows.h"
#include <iostream>


int main()
{
	SetConsoleOutputCP(1251);
	int m, n;
	printf("Введите 2 числа: ");
	scanf_s("%d%d", &m, &n);
	while (m != 0 && n != 0) {
		if (m > n) {
			m %= n;
		}
		else {
			n %= m;
		}
	}
	printf("Остаток от деления: %d\n", m + n);
	system("pause");
	return 0;
}