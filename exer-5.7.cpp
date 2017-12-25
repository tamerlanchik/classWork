#include <stdio.h>
#include <conio.h>
const int n=12, m=14;
void inputMatrix(int[][m+3],int*,int*);
void outputMatrix(int[][m+3],int,int);
int sum(int[], int x, int y);
void searchNegNumbs(int[],int*,int*, int);
//print indexes of the first and last neg numbs in every string & sum of el-s between them
int main()
{
	int a[n][m+3], k, l, x, y;
	inputMatrix(a,&k,&l);
	for (int i=0; i<k; i++){
        searchNegNumbs(a[i], &x, &y, l);
		a[i][l]=sum(a[i], x, y);
	}
	printf("Result: \n");
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
        if(a[i][l+1]*a[i][l+2]==0)
            printf("| Less than 2 negative elements");
        else
            printf("| S: %d, 1st: %d, last: %d", a[i][l], a[i][l+1], a[i][l+2]);
		printf("\n");
	}
}
void searchNegNumbs(int a[],int* first,int* last, int l)
{
    *first=-1, *last=-1;
    for(int j=0; j<l; j++)
    {
        if(a[j]<0){
            if (*first==-1)
                *first=j;
            else
                *last=j;
        }
    }
    if (*first==-1)
        a[l+1]=0;
    else
        a[l+1]=a[*first];
    if(*last==-1)
        a[l+2]=0;
    else
        a[l+2]=a[*last];
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
