#include<stdio.h>
int main()
{
  int n, i, j;
  printf("Enter N = ");
  scanf("%d", &n);
  for(i=1; i<=n; i++)
  {
    //printing space
    for(j=1; j<=n-i; j++)
    {
      printf(" ");
    }
    //printing number
    for(j=1; j<=i; j++)
    {
      printf("*");
    }
    printf("\n"); 
  }




}