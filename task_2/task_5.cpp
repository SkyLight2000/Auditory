// task_2.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"
#include "math.h"
#include <cstdlib>



int main()
//Задача №6
{
		float a, b, c;
		printf("Enter a:\n");
		scanf_s("%f", &a);
		printf("Enter b:\n");
		scanf_s("%f", &b);
		printf("Enter c:\n");
		scanf_s("%f", &c);
		if (a >= b + c || b >= a + c || c >= b + a)
		{
			printf("Triangle doesn't exist\n");
			system("pause");
			return 0;
		}
		else
			if (a == b && a == c && c == b)
				printf("Triangle is equilateral\n");
			else
				if (a == b || a == c || c == b)
					printf("Triangle if isosceles\n");
				else
					if(a * a + b * b == c * c || c * c + a * a == b * b || b * b + c * c == a * a)
					printf("Triangle is rectangular\n");
					else
						printf("Triangle is versatile\n");
					
	system("pause");
    return 0;
}