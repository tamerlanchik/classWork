//#include "stdafx.h"
#include <conio.h>
#include <stdio.h>
#include <math.h>
const double e = 2.718;
double f0(double x)
{
    return x*x-4;
}
double fDer0(double x)
{
    return 2*x;
}
double sDer0(double x)
{
    return 2;
}
double f1(double x){
	return sin(x)-x+2;
}
double fDer1(double x)
{
	return cos(x)-1;
}
double sDer1(double x)
{
	return -sin(x);
}

double f2(double x)
{
	return pow(e, x)+log(x/10)+2;
}
double fDer2(double x)
{
	return pow(e, x)+1/x;
}
double sDer2(double x)
{
	return pow(e, x)-1/(x*x);
}

int chordMeth(double, double, double, double(*)(double), double(*)(double), double*, int*);
int tanMeth(double, double, double, double(*)(double),  double(*)(double), double(*)(double), double*, int*);

int main()
{
	double a, b, x, eps; int c, n, y;
	printf("Eps: ");
	scanf("%lf", &eps);
	do{
        printf("0: F=x^2-4\n");
		printf("1: F=sin(x)-x+2)\n");
		printf("2: F=e^x+ln(x/10)+2\n");
		printf("3: Exit\n");
		scanf("%d", &y);


		switch(y) {
        case 0:
            printf("Enter a, b \n");
	     	scanf("%lf%lf", &a, &b);
     		if(chordMeth(a, b, eps, f0, fDer0, &x, &c))
	     		printf("ChordMeth: Cannot find ans\n");
            else{
                printf("ChordMeth: x=%lf\n", x);
                printf("Iters: %d\n", c);
            }
            if(tanMeth(a, b, eps, f0, fDer0, sDer0, &x, &c))
                printf("TanMeth: Cannot find ans\n");
            else{
                printf("TanMeth: x=%lf\n", x);
                printf("Iters: %d\n", c);
            }
            break;
     	case 1:
     		printf("Enter a, b \n");
	     	scanf("%lf%lf", &a, &b);
     		if(chordMeth(a, b, eps, f1, fDer1, &x, &c))
	     		printf("ChordMeth: Cannot find ans\n");
            else{
                printf("ChordMeth: x=%lf\n", x);
                printf("Iters: %d\n", c);
            }
            if(tanMeth(a, b, eps, f1, fDer1, sDer1, &x, &c))
                printf("TanMeth: Cannot find ans\n");
            else{
                printf("TanMeth: x=%lf\n", x);
                printf("Iters: %d\n", c);
            }
     		break;

			case 2:
				printf("Enter a, b \n");
				printf("[a;b] range doesnt include \"0\" inside\n");
	     		scanf("%lf%lf", &a, &b);
				if(chordMeth(a, b, eps, f2, fDer2, &x, &c)) printf("F2, chordMeth: Cannot find ans\n");
				else{
				printf("F2, chordMeth: x=%lf\n", x);
				printf("Iters: %d\n", c);
				}

				if(tanMeth(a, b, eps, f2, fDer2, sDer2, &x, &c)) printf("F2, tanMeth: Cannot find ans\n");
				else{
					printf("F2, tanMeth: x=%lf\n", x);
					printf("Iters: %d\n", c);
				}
				break;
            }
	}while(y!=3);
	return 0;
}

int chordMeth(double a,double b,double eps,double f(double x), double fDer(double x), double* ans, int* c)
{
	int fl=1;
	double x;
	*c=0;
	if(f(a)*f(b)<0)
	{
		if(fDer(a)*fDer(b)>0)
		{
			fl=0;
			do{
				*c+=1;
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
int tanMeth(double a,double b,double eps,double f(double x),double fDer(double x),double sDer(double x),double* ans, int* c)
{
	int fl=1;
	double x;
	*c=0;
	if(f(a)*f(b)<0)
	{
		if(fDer(a)*fDer(b)>0)
		{
			if(sDer(a)*sDer(b)>0)
			{
				fl=0;
				if(f(a)*sDer(a)>0)
					x=a-f(a)/fDer(a);
				else
					x=b-f(b)/fDer(b);
				do{
					*c+=1;
					x=x-f(x)/fDer(x);
				} while(fabs(f(x))>eps);
				*ans=x;
			}
		}
	}
	return fl;
}
