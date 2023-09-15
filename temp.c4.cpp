#include<stdio.h>

main()
{
	   int i=0,n,p,h;
	   printf("enter number=");
	   scanf("%d",&n);
	   h=n%10;
	   while(n>=10)
	   {
	   	    n=n/10;
	   }
	   p=n;
	   i=p+h;
	   printf("first and last no =%d0",i);
}