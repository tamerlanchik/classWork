#include<stdio.h>
#include<stdlib.h>
#include<math.h>
void inputArray(int []);
int inputString(int []);
void outputArray(int[], int);
void encrypting(int[], int[], int[], int);
int decrypting(int[], int[], int);
int find(int[], int, int);

int main()
{
	int R, V[10], S[30], D[30], l;
	inputArray(V);
	l = inputString(S);
	encrypting(V, S, D, l);
	outputArray(D, l);
	R = decrypting(D, V, l);
	return 0;
}

void inputArray(int a[])
{
	printf("Input the V(10) array: \n");
	for(int i = 0; i<10; i++)
	    scanf("%d", &a[i]);
}
int inputString(int s[])
{
	int l;
	printf("Input the length of string: ");
	scanf("%d", &l);
	printf("\nInput %d numbers\n", l);
	for(int i=0; i<l; i++)
	{
		scanf("%d", &s[i]);
	}
	return l;
}
void encrypting(int V[], int S[], int D[], int l)
{
	for(int i = 0; i<l; i++)
	{
		D[i] =i-V[S[i]];
	}
}
void outputArray(int a[], int l)
{
	printf("Encryptioned string: ");
	for(int i=0; i<l; i++)
	    printf("%d ", a[i]);
	printf("\n");
}
int decrypting(int D[], int V[], int l)
{
	int k;
	printf("Input k: ");
	scanf("%d", &k);
	int numb = find(V, 10, k-D[k]);
	if (numb!=-1){
		printf("The k-th number is \"%d\"", numb);
		return numb;
		}
	
}
int find(int a[], int l, int key)
{
	for(int i=0; i<l; i++)
	{
		if(a[i] == key)
		    return i;
	}
	return -1;
}
