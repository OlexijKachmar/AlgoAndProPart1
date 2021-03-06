

#include "pch.h"
#include <stdio.h>
#include <math.h>
#define M_PI 3.14159265358979323846

void main()
{
	int n = 40;
	double SN = 0;
	double SE = 0;
	double an;
	int p = 0;

	for (double x = 0.1; x <= 0.81; x += 0.07)
	{
		printf("x: ");
		printf("%lf\t", x);
		double y = (sin(M_PI / 4)) / (1 - 2 * x*cos(M_PI / 4) + pow(x, 2));
		printf("y:");
		printf("%lf\t", y);

		for (int i = 0; i < n; i++)
		{
			an = pow(x, i) * sin(i*M_PI / 4);
			SN += an;
		}
		printf("SN:");
		printf("%lf\t", SN);

		do
		{
			an = pow(x, p) * sin(p*M_PI / 4);
			SE += an;
			p++;
		} while (fabs(an) > 0.0001 );
		printf("SE:");
		printf("%lf\n", SE);
	}
	
}

