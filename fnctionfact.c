#include <stdio.h>
void fibo(int n);
int main()
{
    int n;
    printf("enter a number:");
    scanf("%d",&n);
    fibo(n);
    return 0;
}
	void fibo(int n)
	{
	    int a=0,b=1,c,i;
	    printf("%d%d",a,b);
	    for(i=1;i<=n-2;i++)
	    {
	        c=a+b;
	        printf("%d",c);
	        a=b;
	        b=c;
	       
	    }
	}
