#include<stdio.h>

main()
{
	   int i=1,mul,n;
	   
	   printf("enter number=");
	   scanf("%d",&n);
	   while(i<n,i<=10)
	   {
	   	    mul=n*i;
	   	    printf("%d*%d=%d\n",n,i,n*i);
	   	    i++;
	   }
}