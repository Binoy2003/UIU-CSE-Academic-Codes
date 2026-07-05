#include<stdio.h>
int main(){
 int n,i,index;
 printf("How many elements in an array?");
 scanf("%d",&n);
 int array[n];
 for(i=0;i<n;i++){
    scanf("%d",&array[i]); // 1 2 3 4 5
 }
 for(i=0;i<n;i++){
    printf("%d ",array[i]);
 }
 int max=array[0];
 for(i=1;i<n;i++){
    if(array[i]>max){
            max=array[i];
            index=i;

    }
 }
 printf("The max value of array is:%d\n",max);
  printf("The index of max value is:%d\n",index);




}
