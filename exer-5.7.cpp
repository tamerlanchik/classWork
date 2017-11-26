#include <stdio.h>
const int n=12, m=14;
void inputMatrix(int[][m+3],int*,int*);
void outputMatrix(int[][m+3],int,int);
int sum(int[], int x, int y);
int main()
{
	int a[n][m+3], k, l;
	inputMatrix(a,&k,&l);
	printf("The matrix: \n");
	for (int i=0; i<k; i++){
		int x=-1, y=-1;
		for(int j=0; j<l; j++)
		{
			if(a[i][j]<0){
				if (x==-1)
					x=j;
				else
					y=j;
			}
		}
		a[i][l]=sum(a[i], x, y);
		if(x>=0)
			a[i][l+1]=a[i][x];
		else
			a[i][l+1]=0;
		if(y>=0)
			a[i][l+2]=a[i][y];
		else
			a[i][l+2]=0;
	}
	outputMatrix(a, k, l);
	return 0;
}
void inputMatrix(int a[][m+3],int* k,int* l){
	printf("Enter numb of str-s and col-s: ");
	scanf("%d%d", k, l);
	printf("Enter the matrix:\n");
	for(int i=0; i<*k; i++)
		for(int j=0; j<*l; j++)
			scanf("%d", &a[i][j]);
}

void outputMatrix(int a[][m+3],int k,int l){
	for(int i=0; i<k; i++){
		for(int j=0; j<l; j++)
			printf("%d ", a[i][j]);
		printf("S: %d, 1st: %d, last: %d", a[i][l], a[i][l+1], a[i][l+2]);
		printf("\n");
	}
}
int sum(int a[], int x, int y)
{
	int s=0;
	if (x!=-1)
		if(y!=-1)
			for(int i=x+1; i<y; i++)
       if(a[i]>0)
				  s+=a[i];
	return s;
}


