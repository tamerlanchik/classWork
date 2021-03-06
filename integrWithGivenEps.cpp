// ConsoleApplication8.cpp: ���������� ����� ����� ��� ����������� ����������.
//

#include "stdafx.h"
#include <conio.h>
#include <stdio.h>
#include <math.h>

double integralCalcRectMethod(double, double, double, double(*)(double), int*);
double integralCalcTrapMethod(double, double, double, double(*)(double), int*);
double f1(double x)
{
	return x;
}
double f2(double x)
{
	return 4-x*x;
}
double f3(double x)
{
	return 4-x;
}

int main()
{
	double a, b, eps;
	int c1, c2, key;

	printf("Enter an interval: ");
	scanf("%lf%lf", &a, &b);
	printf("\nEnter eps: ");
	scanf("%lf", &eps);

	do{
		printf("1: y=x\n");
		printf("2: y=4-x*x\n");
		printf("3: y=4-x\n");
		printf("4: exit\n");
		scanf("%d", &key);

		switch(key){
		case 1:
			printf("In interval (%lf, %lf)", a, b);
			printf("With eps: %lf\n", eps);
			printf("Integral=%lf\n", integralCalcRectMethod(a, b, eps, f1, &c1));
			printf("Numb of iters: %d\n\n", c1);
			printf("Integral=%lf\n", integralCalcTrapMethod(a, b, eps, f1, &c2));
			printf("Numb of iters: %d\n\n", c2);
			break;

		case 2: 
			printf("In interval (%lf, %lf)", a, b);
			printf("With eps: %lf\n", eps);
			printf("Integral=%lf\n", integralCalcRectMethod(a, b, eps, f2, &c1));
			printf("Numb of iters: %lf\n\n", c1);
			printf("Integral=%lf\n", integralCalcTrapMethod(a, b, eps, f2, &c2));
			printf("Numb of iters: %d\n\n", c2);
			break;

		case 3: 
			printf("In interval (%lf, %lf)", a, b);
			printf("With eps: %lf\n", eps);
			printf("Integral=%lf\n", integralCalcRectMethod(a, b, eps, f3, &c1));
			printf("Numb of iters: %d\n\n", c1);
			printf("Integral=%lf\n", integralCalcTrapMethod(a, b, eps, f3, &c2));
			printf("Numb of iters: %d\n\n", c2);
			break;
		}

	}while (key!=4);
	getch();
	return 0;
}

double integralCalcRectMethod(double a, double b, double eps, double f(double x), int* c)
{
	int n=1;
	*c = 0;
	double s1, s2, dx, x;
	s2=0;
	do{
		s1=s2;
		s2=0;
		dx = (b-a)/n;
		x=a +dx/2.0;
		for(int i=0; i<n; i++)
		{
			s2+=f(x);
			x+=dx;
			++*c;
		}
		s2*=dx;
		n*=2;
	}while(fabs(s1-s2)>eps);
	return s2;
}

double integralCalcTrapMethod(double a, double b, double eps, double f(double x), int* c)
{
	double dx, x, f1, f2;
	int n=1;
	*c = 0;
	double s1, s2;
	s2=0;
	do {
		s1=s2;
		s2=0;
		dx=(b-a)/n;
		x=a;
		f1=f(x);
		for(int i=0; i<n; i++)
		{
			x+=dx;
			f2=f(x);
			s2+=f1+f2;
			f1=f2;
			++*c;
		}
		s2=s2*dx/2;
		n*=2;
	}while(fabs(s1-s2)>eps);
	
	return s2;
}