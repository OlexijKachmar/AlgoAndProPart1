#include "pch.h"
#include <math.h>
#include "Sum.h"
  

double Lab2::GetSum(void)
{
	double a; int i = 0; double Sum = 0;
	do
	{
		 a = (2 * i - 1) / pow(2, i);
		 Sum += a;
		 i++;

	} while (fabs(a) > 0.0001);
	return Sum;
}

