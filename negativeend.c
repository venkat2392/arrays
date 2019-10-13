/*Move all negative elements to end in order with extra space allowed */
#include<stdio.h>
int main()
{
	int a[]={1,-2,3,-4,5,-6,7};
	int tmp[10]={0};
	int i,j=0,cnt=0;
	for(i=0;i<sizeof(a)/sizeof(a[0]);i++)
	{
		if(a[i]<0)
		{
			cnt++;
			tmp[j++]=a[i];
			continue;
		}
		else
		{
			a[i-cnt]=a[i];
		}
	}
	for(i=i-cnt,j=0;i<sizeof(a)/sizeof(a[0]);i++)
	{
		a[i]=tmp[j++];
	}
	printf("after array elements:");
	for(i=0;i<sizeof(a)/sizeof(a[0]);i++)
	{
		printf("%d\t",a[i]);
	}
	printf("\n");
}
