#include "pch.h"
#include <iostream>
#include <stdio.h>
#include <math.h>
#include "variant8.h"

	
	int main(void)
	{
		double a = 100;
		double b = 0.001;
		printf("%lf\n", Lab1::task1(a, b));

		float a1 = 100;
		float b1 = 0.001;
		printf("%f\n", Lab1::task2(a1, b1));

		int n,m;
		printf("Enter a number of elements n ");
		scanf_s("%d", &n);
		printf("Enter a number of elements m");
		scanf_s("%d", &m);
		Lab1::task3(n, m);

	}

