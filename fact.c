/* program to find the // factorial of a number*/
#include<stdio.h>
int factorial(int n)
{
  int i,prod=1;
  for(i=1;i<=n;i++)
    prod=prod*i;
  return prod;
}// factorial function ends

int main()
{
  int x,n;
  scanf("%d",&n);
  x=factorial(n);//calling the factorial function
  printf("%d\n",x);// printing the factorial
  return 0;
}//main ends 
