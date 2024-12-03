#include<stdio.h>
int main()
{
	int i,n1,n2,m,a1[10],a2[20],a3[30],index=0;
	printf("enter the size of array 1");
	scanf("%d",&n1);
	printf("enter the elements of array 1");
	for(i=0;i<n1;i++)
	{
		scanf("%d",&a1[i]);
	}
	printf("enter the size of array 2");
	scanf("%d",&n2);
	printf("enter the elements of array 2");
	for(i=0;i<n2;i++)
	{
		scanf("%d",&a2[i]);
	}
	for(i=0;i<n1;i++)
	{
		a3[index]=a1[i];
		index++;
	}
	for(i=0;i<n2;i++)
	{
		a3[index]=a2[i];
		index++;
	}
	m=n1+n2;
	printf("the resultant array is");
	for(i=0;i<m;i++)
	{
		printf("%d",a3[i]);
	}
}
