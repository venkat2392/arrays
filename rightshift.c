#include<stdio.h>
int main()
{
	int i,j;
	int a[]={1,2,3,4,5};
	for(i=0;i<2;i++)
	{
		for(j=4;j>0;j--)
		{
			a[j]=a[j-1];
		}
		a[j]=0;
	}
	printf("after array shift:");
	for(i=0;i<5;i++)
	{
		printf("%d\t",a[i]);
	}
	printf("\n");
}

