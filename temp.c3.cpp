#include<stdio.h>

main()
{
	  int i=0,n;
	  printf("enter number=");
	  scanf("%d",&n);
	  while(n>0)
	  {
	  	    n/=10;
	  	    i+=1;
	  }
	  printf("%d",i);
}