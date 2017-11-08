#include "stdafx.h"
#include <stdio.h>
#include <conio.h>
#include <math.h>
void pointInput(double [], double [], int*);
double dist(double, double, double, double);
double minDist(double[], double[], int, double*, double*, double*, double*);
double maxDist(double[], double[], int, double*, double*, double*, double*);

int main()
{
	const int n = 10;
	int k;
	double x[n], y[n], xmin1, ymin1, xmin2, ymin2, xmax1, ymax1, xmax2, ymax2, dmin, dmax;

	pointInput(x,y,&k);

	dmin = minDist(x,y,k,&xmin1,&ymin1,&xmin2,&ymin2);
	printf("Min. dist. \"%lf\" between (%lf, %lf) (%lf, %lf)\n", dmin, xmin1, ymin1, xmin2, ymin2);

	dmax = maxDist(x,y,k,&xmax1,&ymax1,&xmax2,&ymax2);
	printf("Max. dist. \"%lf\" between (%lf, %lf) (%lf, %lf)\n", dmax, xmax1, ymax1, xmax2, ymax2);

	getch();
	return 0;
}

void pointInput(double x[], double y[], int* k)
{
	printf("Enter the count of the points: ");
	scanf("%d", k);
	printf("Enter %d points (x y):\n", *k);
	for(int i = 0; i<*k; i++)
		scanf("%lf%lf", &x[i], &y[i]);
}
double dist(double x1, double y1, double x2, double y2)
{
	return(sqrt((x1-x2)*(x1-x2) + (y1-y2)*(y1-y2)));
}
double minDist(double x[], double y[], int k, double *xmin1, double *ymin1, double *xmin2, double *ymin2)
{
	double lmin, temp;
	lmin = dist(x[0], y[0], x[1], y[1]);
	*xmin1 = x[0]; *ymin1 = y[0];
	*xmin2 = x[1]; *ymin2 = y[1];

	for(int i= 0; i<k-1; i++)
	{
		for(int j=i+1; j<k; j++)
		{
			temp = dist(x[i], y[i], x[j], y[j]);
			if(temp<lmin)
			{
				lmin = temp;
				*xmin1 = x[i]; *ymin1 = y[i];
				*xmin2 = x[j]; *ymin2 = y[j];
			}
		}
	}

	return lmin;
}

double maxDist(double x[], double y[], int k, double *xmax1, double *ymax1, double *xmax2, double *ymax2)
{
	double lmax, temp;
	lmax = dist(x[0], y[0], x[1], y[1]);
	*xmax1 = x[0]; *ymax1 = y[0];
	*xmax2 = x[1]; *ymax2 = y[1];

	for(int i= 0; i<k-1; i++)
	{
		for(int j=i+1; j<k; j++)
		{
			temp = dist(x[i], y[i], x[j], y[j]);
			if(temp>lmax)
			{
				lmax = temp;
				*xmax1 = x[i]; *ymax1 = y[i];
				*xmax2 = x[j]; *ymax2 = y[j];
			}
		}
	}

	return lmax;
}