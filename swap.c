#include<stdio.h>

int num1,num2,temp;

int swap(int *a,int *b){
  temp = *a;
  num1 = *b;
  num2 = temp;
  return 0;
}

void main(){
  num1 = 1;
  num2 = 2;
  printf("The value in the varibale num1 is : %d",num1);
  printf("\nThe value in the varibale num2 is : %d",num2);
  swap(&num1,&num2);
  printf("\nThe value in the varibale num1 is : %d",num1);
  printf("\nThe value in the varibale num2 is : %d",num2); 
}
