// task_2.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"
#include "stdlib.h"
#include "math.h"
#include "time.h"



int main()
{
	srand(time(NULL));
	int d[2][2];
	for (int i = 0; i < 2; ++i) {
		for (int j = 0; j < 2; ++j) {
			d[i][j] = rand() % 7;
		}
	}
	for (int i = 0; i < 2; ++i) {
		if (d[0][i] == d[1][0] || d[0][i] == d[1][1] && d[0][0] != d[0][1] && d[1][0] != d[1][1]) {
			printf("Dominoes can be put in line\n");
		}
	}
	system("pause");
    return 0;
}