#include <stdio.h>

int main(void) {
	int i,n,fib;
	int f1=0;
	int f2=1;
	printf("enter the values of n");
	scanf("%d",&n);
	if(n>0)
	{
	    for(i=0;i<n;i++)
	    {
	        fib=f1+f2;
	        f1=f2;
	        f2=fib;
	    };
	};
	printf("fibnaci series=%d",fib);
      
	return 0;
}
