#include<stdio.h>
int f()
{
  static int x = 10;
  x=x+1;
  return x;
}
int main()
{
  int z;
  printf("%d\n",z);
  z=f();
  printf("%d\n",z);
  return 0;
}
