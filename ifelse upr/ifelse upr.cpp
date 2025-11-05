// ifelse upr.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <stdio.h>
#include <math.h>

int main()
{
	/*int a;
	scanf_s("%i", &a);
	if (a%2==0)
	{
		printf("%i e chetno",a);
	}
	else
	{
		printf("%i ne e chetno", a);
	}*/


	//float a, b, c;
	//scanf_s("%f", &a);
	//scanf_s("%f", &b);
	//scanf_s("%f", &c);
	//if (a+b>c&&a+c>b&&b+c>a)
	//{
	//	if (a==b&&b==c)
	//	{
	//		printf("triagulnika e ravnostranen");
	//	}
	//	else if (a==b||a==c||b==c)
	//	{
	//		printf("triugalnika e ravnobedren");
	//	}
	//	else
	//	{
	//		printf("triugalnika e raznostranen");
	//	}
	//	
	//}
	//else
	//{
	//	printf("nqma takuv triagunik");
	//}
	// 
	// 
	// 
	float a, b, c, D,x1,x2;
	scanf_s("%f", &a);
	scanf_s("%f", &b);
	scanf_s("%f", &c);
	D = pow(b, 2) - 4 * a * c;
	if (D>0)
	{
		x1 = (-b + sqrt(D))/2*a;
		x2 = (-b - sqrt(D)) / 2 * a;
		printf("\n x1= %f", x1);
		printf("\n x2= %f", x2);
	 
	}
	else if (D==0)
	{
		x1 = (-b + sqrt(D)) / (2 * a);
		x2 = x1;
		printf(" x1 i x2 dvoen koren =%f", x1);
	}
	else
	{
		printf("Nqma realni coreni");
	}
}
