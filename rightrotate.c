#include<stdio.h>
int main()
{
	int i,j,k=0;
	int a[]={1,2,3,4,5};
	int tmp[2];
	for(i=0;i<2;i++)
	{
		tmp[k]=a[4];
		for(j=4;j>0;j--)
		{
			a[j]=a[j-1];
		}
		a[j]=tmp[k];
	}
	printf("after array shift:");
	for(i=0;i<5;i++)
	{
		printf("%d\t",a[i]);
	}
	printf("\n");
}

