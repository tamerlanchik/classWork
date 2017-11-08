// exers-6.6.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"
#include <stdio.h>
#include <conio.h>
const int k=3, m=5;
void inputArray(int[][m],int*,int*);
void outputArray(int[][m],int,int);
int isSymmetric(int[],int);
/*
	3 5
	0 4 1 4 0
	1 2 3 4 5
	1 2 3 2 1
*/
int main()
{
	int l, n, c = 0; 
	//int X[k][m];
	//inputArray(X, &l, &n);
	l=k;
	n=m;
	int X[k][m] = { 
		{0, 4, 1, 4, 0},
		{1, 2, 3, 4, 5},
		{1, 2, 3, 2, 1} };

	printf("Source array:\n");
	outputArray(X, l, n); 
	int A[k][m];
	for(int i=0; i<l; i++)
		if (isSymmetric(X[i], n))
		{
			for(int j=0; j<n; j++)
				A[c][j]=X[i][j];
			c++;
		}

	printf("\nArray of symmetrical str-s:\n");
	outputArray(A, c, m);
	getch();
	return 0;
}
void inputArray(int a[][m],int* l,int* n){
	printf("Enter numb of str-s and col-s: ");
	scanf("%d%d", l, n);
	printf("Enter the matrix:\n");
	for(int i=0; i<*l; i++){
		for(int j=0; j<*n; j++)
			scanf("%d", &a[i][j]);
	}
}

void outputArray(int a[][m],int l,int n){
	for(int i=0; i<l; i++)
	{
		for(int j=0; j<n; j++)
			printf("%d ", a[i][j]);
		printf("\n");
	}
}
int isSymmetric(int s[], int l)
{
	for(int i=0; i<l/2; i++)
	{
		if(s[i] != s[l-i-1])
			return 0;
	}
	return 1;
}