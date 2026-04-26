#include<stdio.h>
int main(){
 int n;
 scanf("%d", &n);

 float arr[n];
 int i;
 float sum = 0;
 
 for(i=0; i<n; i++){
  scanf("%f", &arr[i]);
 }
   for(i=0; i<n; i++){
     sum=sum+arr[i];
   }

   float avg=sum/n;
 printf("Average = %.2f\n", avg);
  return 0;
}