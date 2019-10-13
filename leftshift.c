#include<stdio.h>
int main()
{
	int i,j;
	int a[]={1,2,3,4,5};
	for(i=0;i<3;i++)
	{
		for(j=0;j<4;j++)
		{
			a[j]=a[j+1];
		}
		a[j]=0;
	}
	printf("array elements:");
	for(i=0;i<5;i++)
	{
		printf("%d\t",a[i]);
	}
	printf("\n");		
}
