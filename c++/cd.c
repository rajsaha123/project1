#include <stdio.h>

int main(void) {
	// your code goes here
	int n,t,k,a=0,b=0,i;
	scanf("%d", &t);
	
	
	while(--t)
	{
	  scanf("%d%d", &n,&k);
	  if(n%k==0)
	  {
	    printf("%d  %d", n/k,a);
	}
	else if(n%k!=0 && n>k)
	{
	  while(n%k!=0)
	  { 
	     n=n-1;
	      b++;
	  }
	  printf("%d  %d", n%k,b);
  }
	}
	
	return 0;
}