// task_3.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"
#include "stdlib.h"
#include "math.h"
int main()
{
	double xa, ya, xb, yb, xc, yc, xd, yd;
	printf("Enter coordinats A:");
	scanf_s("%lf%lf", &xa, &ya);
	printf("Enter coordinats B:");
	scanf_s("%lf%lf", &xb, &yb);
	printf("Enter coordinats C:");
	scanf_s("%lf%lf", &xc, &yc);
	printf("Enter coordinats D:");
	scanf_s("%lf%lf", &xd, &yd);
	if (
		(((xd - xa)*(yb - ya) - (yd - ya)*(xb - xa))*((xc - xa)*(yb - ya) - (yc - ya)*(xb - xa)) >= 0) &&
		(((xd - xb)*(yc - yb) - (yd - yb)*(xc - xb))*((xa - xb)*(yc - yb) - (ya - yb)*(xc - xb)) >= 0) &&
		(((xd - xc)*(ya - yc) - (yd - yc)*(xa - xc))*((xb - xc)*(ya - yc) - (yb - yc)*(xa - xc)) >= 0)) {
		printf("Yes\n");
	}
	else {
		printf("No\n");
	}
	system("pause");
	return 0;
}

