// task10.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "windows.h"
#include <iostream>
#include "windows.h"

int f(int N)
{
	int F = 1;
	for (int i = 1; i <= N; ++i)
	{
		F *= i;
	}
	return F;
}

int main()
{
	SetConsoleOutputCP(1251);
	int N;
	printf("Введите N: ");
	scanf_s("%d", &N);
	if (N >= 0)
	{
		printf("%d\n", f(N));
	}
	else
	{
		printf("Ошибка 404: Факториал не может быть меньше 1");
	}
	system("pause");
	return 0;
}
