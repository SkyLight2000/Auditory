#include "stdafx.h"
#include <iostream>
#include <new>
#include <locale>
#include "windows.h"

using namespace std;

int main()
{
	SetConsoleOutputCP(1251);
	int i, j, N;
	bool *a;
	printf("Введите N: ");
	scanf_s("%d", &N);
	N += 1;
	a = new bool[N];
	for (i = 1; i <= N; i++) {
		a[i] = true;
	}
	for (i = 2; ((i*i) <= N); i++) {
		if (a[i]) {
			for (j = i * i; j <= N; j += i) {
				if (a[j]) {
					a[j]=false;
				}
			}
		}
	}
	for (i = 1; i <= N; i++) {
		if (a[i]) {
			printf("%d ", i);
		}
	}
	system("pause");
	return 0;
}