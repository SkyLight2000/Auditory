// Lab.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"
#include "stdlib.h"
#include "math.h"



int main()
//Задача № 1
{
	double x, y; 
	printf("Enter coordinats M (x, y): ");  
	scanf_s("%lf %lf", &x, &y);   
	if (x<0 && x>-1 && y<1 && y>-1) {
		printf("M is located at the intersection of the circles\n"); }
	else {
		printf("M isn't located at the intersection of the circles\n"); 
	}
	system("pause");  
	return 0;
}

