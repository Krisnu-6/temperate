#include<stdio.h>

main()
{
	    int n,i,num=0;
	    printf("enter number=");
	    scanf("%d",&n);
	    if(n==0 && n)
	    {
	    	   printf("%d is not a prime no.",n);
		}
		else
		{
			  for(i=2;i<=n/2;i++)
			  {
			  	     if(n%i==0)
			  	     {
			  	     	    num=1;
					 }
			  }
			  if(num==0)
			  {
			  	    printf("%d is a prime number.",n);
			  }
			  else
			  {
			  	    printf("%d is not prime number.",n);
			  }
		}
}