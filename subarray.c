#include<stdio.h>
int main()
{
	int a[20]={0};
	int i,j,count=0,odd=0,n,m;
	printf("enter odd subarrays:");
	scanf("%d",&m);
	printf("enter array size:");
	scanf("%d",&n);
	printf("enter array elements:");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++)
	{
		odd = 0;
		for(j=i;j<n;j++)
		{
			if(a[j]%2)
				odd++;
			if(odd == m)
			{
				count++;
			}
		}
	}
	printf("subarrays:%d\n",count);
}			
