#include<stdio.h>
void inputtwonumbers(int *a , int *b)
{
  printf("Enter two numbers\n");
  scanf("%d%d",a,b);
}
void sum(int a,int b, int *sum)
{
  *sum=a+b;
}
void output(int a ,int b , int c)
{
  printf("sum of %d and %d=%d",a,b,c);
}
int main()
{
 int x,y,z;
 inputtwonumbers(&x,&y);
 sum(x,y,&z);
 output(x,y,z);
 return 0;
}