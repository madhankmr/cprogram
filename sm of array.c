#include <stdio.h>

int main() {
	int arr[10];
	int sum=0;
	int i;
	printf("enter the 10 elements in an array");
	for(i=0;i<10;i++)
	{ 
	scanf("%d",&arr[i]);
	}
	printf("Elements in array");
	for(i=0;i<10;i++)
	{
	   sum=sum+arr[i];
	}
	printf("%d",sum);
	return 0;
}
