#include "pch.h"
#include "variant8.h"
#include <stdio.h>
#include <iostream>
#include <math.h>



    double Lab1::task1(double a, double b)
	{
		
		double res = (pow((a+b),4) - pow(a, 4) - 4 * pow(a, 3)*b - 6 * pow(a, 2)*pow(b, 2))/ (4 * a*pow(b, 3) + pow(b, 4));
		return res;
		
	}

	 float Lab1::task2(float a1, float b1)
	{
		 double res1 = (pow((a1 + b1), 4) - pow(a1, 4) - 4 * pow(a1, 3)*b1 - 6 * pow(a1, 2)*pow(b1, 2)) / (4 * a1*pow(b1, 3) + pow(b1, 4));
		 return res1;
		
		
	}
	 void Lab1::task3(int n, int m)
	{
		int res = n++ - m;
		printf("%d\n", res);
		(m-- < --n) ? printf("%s\n", "true") : printf("%s\n", "false");
		(n-- > ++m) ? printf("%s\n", "true") : printf("%s\n", "false");
	}

