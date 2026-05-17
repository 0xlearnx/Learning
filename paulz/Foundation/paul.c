#include<stdio.h>
void swap(int *a, int *b){
 int c ;
  c=*a;
  *a=*b;
  *b=c;
}

int main(){

int a,b;
int *x,*y;
x=&a;
y=&b;
scanf("%d %d",x,y);
printf("\nbefore %d %d\n",*x,*y);
swap(x,y);
printf("After %d %d",*x,*y);
return 0;
}
