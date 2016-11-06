#include <iostream>
#include "Do-While.hpp"
#include "stdafx.h"
#include <stdio.h>
#include <math.h>
#include <stdlib.h>
using namespace std;

double factorial(int n)
{
	if (n > 0)  return n*factorial(n - 1);
	else
		return 1;
}	
void main()
{
	double e = 1e-4;
	double Sum = 0; 
	double si; 
	int n = 0; 
	int znak = 1; 
setlocale(LC_ALL,"rus");
	
	 cout<<"\nCумма равна: " << Sum;
	 cout<<"\n ln(2): " << log(2.);
       
 system("pause");
}
