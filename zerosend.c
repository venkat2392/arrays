/*Move all zeroes to end of array*/
#include<stdio.h>
int main()
{
	int a[]={1,2,3,0,0,0,0,0,0,6};
	int i,j,cnt = 0;
	for(i=0;i<sizeof(a)/sizeof(a[0]);i++)
	{
		if(a[i]==0)
		{
			cnt++;
			continue;
		}
		else
		{
			a[i-cnt]=a[i];
		}
	}
	for(i=i-cnt;i<sizeof(a)/sizeof(a[0]);i++)
	{
		a[i]=0;
	}
	printf("after array elements:");
	for(i=0;i<sizeof(a)/sizeof(a[0]);i++)
	{
		printf("%d\t",a[i]);
	}
	printf("\n");
}

