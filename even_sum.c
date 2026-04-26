#include<stdio.h>
int main(){
  int n;
  scanf("%d", &n);

  int arr [n];
  int i, sum=0;
  
  for(i = 0; i < n; i++){
    scanf("%d", &arr[i]);
  }

  for(i=0; i<n; i++){
    if(arr[i]%2==0){
      sum = sum + arr[i];
    }
  }

 printf("Even_Sum = %d\n", sum);


  return 0;
}