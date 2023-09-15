#include<stdio.h>

main()
{
	    int r1=0,r2=1,r3,i,n;
	    printf("enter number=");
	    scanf("%d",&n);
	    printf("\n%d%d",r1,r2);
	    for(i=2;i<n;i++)
	    {
	    	   r3=r1+r2;
	    	   printf("\n%d",r3);
	    	   r1=r2;
	    	   r2=r3;
		}
}