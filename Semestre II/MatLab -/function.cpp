#include "stdafx.h"
#include "function.h"
#include <math.h>
	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	
double f1(double x)
{
	return x;
}
double fDer1(double x)
{
	return 1;
}
double f2(double x)
{
	return sin(x);
}
double fDer2(double x)
{
	return cos(x);
}
double f3(double x)
{
	return x*x+1;
}
double fDer3(double x)
{
	return 2*x;
}
//ChordMeth
int findRoot(double a,double b,double eps,double f(double x), double fDer(double x), double* ans)
{
	int fl=0;
	double x;
	if(f(a)*f(b)<0)
	{
		if(fDer(a)*fDer(b)>0)
		{
			fl=1;
			do{
				x = a-(b-a)*f(a)/(f(b)-f(a));
				if(f(x)*f(a)<0)
					b=x;
				else
					a=x;
			}while(fabs(f(x))>eps);

			*ans=x;
		}
	}
	return fl;
}
//integralCalcMethod
double integral(double a, double b, double eps, double f(double x))
{
	double dx, x, f1, f2;
	int n=1;
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
		}
		s2=s2*dx/2;
		n*=2;
	}while(fabs(s1-s2)>eps);
	return s2;
}

//Не нужна
bool isNumber(String^ s) {
	if(s->Length==0)
		return 0;
	int pointNumb=0;
	int minusNumb = 0;
	for(int i=0; i<s->Length; i++)
	{
		char t = Convert::ToChar(s[i]);
		if(t==',') pointNumb++;
		if(t=='-') minusNumb++;
		if((t<'0' || t>'9') && t!=',' && t!='-')
			return 0;
		if(pointNumb>1)
			return 0;
		if(minusNumb>1)
			return 0;
	}
	/*if((pointNumb>0 || minusNumb>0) && s->Length<3)
	{
		return 0;
	}*/
	return 1;
}
