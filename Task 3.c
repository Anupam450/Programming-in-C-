#include<stdio.h>

void main()
{
	int a[3],sum=0,i;
	float avg;
	printf("Enter marks of 3 subjects: ");
	for(i=0;i<3;i++)
		{
			scanf("%d",&a[i]);
			sum=sum+a[i];
		}
	
	avg=sum/3;
	printf("\nSum: %d\nAverage: %d",sum,avg);
}
