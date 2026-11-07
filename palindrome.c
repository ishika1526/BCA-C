#include <stdio.h>

int main() 
{
 int n ;
 printf("enter the number");
 scanf("%d",&n);

 int r=0 ;
 int t , c=n;

  while(n!=0)
  {   
     t=n%10;
     n=n/10;
     r=r*10+t;
  }

    if (r==0)
    printf("palindrome");

    else
     printf("not palindrome");
    return 0;
}