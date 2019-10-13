#include<stdio.h>
int main()
{
	int i,j,k;
	int a[]={1,2,3,4,5};
	int tmp[2];
	for(i=0,k=0;i<3;i++,k++)
	{
		tmp[k]=a[0];
		for(j=0;j<4;j++)
		{
			a[j]=a[j+1];
		}
		a[j]=tmp[k];
	}
	printf("array elements:");
	for(i=0;i<5;i++)
	{
		printf("%d\t",a[i]);
	}
	printf("\n");		
}
