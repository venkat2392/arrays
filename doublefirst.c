/*Double the first element and move zero to end
Given an array of integers of size n. Assume ‘0’ as invalid number and all other as valid number. Convert the array in such a way that if next number is a valid number and same as current number, double its value and replace the next number with 0. After the modification, rearrange the array such that all 0’s are shifted to the end.*/
#include<stdio.h>
int main()
{
	int a[]={2,2,2,0,0,4,4,0,0,5};
	int i,j,cnt=0;
	/*double the array elements*/
	for(i=0;i<sizeof(a)/sizeof(a[0]);i++)
	{
		if((a[i]!=0)&&(a[i]==a[i+1]))
		{
			a[i]=2*a[i];
			a[i+1]=0;
		}
	}
	/*moves zeros to the end of array*/
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

