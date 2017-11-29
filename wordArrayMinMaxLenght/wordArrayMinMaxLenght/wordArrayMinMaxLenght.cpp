// wordArrayMinMaxLenght.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"
#include <stdio.h>
#include <conio.h>
const int h=10, l=20;
void inputMatrix(char[][l], int*);
void outputMatrix(char[][l], int);
int strlen(char a[])
{
	int i=0;
	while(a[i]!='\0') i++;
	return i;
}
void swap(char*a, char*b)
{
	char temp=*a;
	*a=*b;
	*b=temp;
}
int main()
{
	char ar[h][l]; int m, max, maxI=0, min, minI=0, t;
	inputMatrix(ar, &m);
	min=max=strlen(ar[0]);
	for(int i=1; i<m; i++)
	{
		t=strlen(ar[i]);
		if(min>t){
			min=t;
			minI=i;
		}
		if(max<t){
			maxI=i;
			max=t;
		}
	}
	for(int i=0; i<max+1; i++)
		swap(&ar[minI][i], &ar[maxI][i]);
	printf("\nResult:\n");
	outputMatrix(ar, m);
	getch();
	return 0;
}
void outputMatrix(char a[][l], int m)
{
	for(int i=0; i<m; i++)
	{
		int j=0;
		puts(a[i]);
		/*while(a[i][j]!='\0')
			printf("%c", a[i][j++]);*/
		//printf("\n");
	}
}
void inputMatrix(char a[][l], int* m)
{
	printf("Enter number of words: ");
	scanf("%d", m);
	for(int i=0; i<*m; i++)
		scanf("%s", &a[i]);
}