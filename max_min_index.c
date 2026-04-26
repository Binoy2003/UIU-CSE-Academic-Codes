#include<stdio.h>
int main(){

  int n, i, maxIndex=0, minIndex=0;
  printf("How many elements in an array?");
  scanf("%d", &n);

  int arr[n];
  
  for(i=0; i<n; i++){
    scanf("%d" ,&arr[i]);
  }

  for(i=0; i<n; i++){
    printf("%d", arr[i]);
  }

  printf("\n");
 
  int max = arr[0];
  int min = arr[0];

  for(i=0; i<n; i++){
    if(arr[i]>max){
      max = arr[i];
      maxIndex = i;
    }
    if (arr[i]<min){
      min = arr[i];
      minIndex = i;
    }
  }
  printf("Max : %d, Index = %d\n", max, maxIndex);
  printf("Min : %d, Index : %d\n", min, minIndex);

  return 0;
}