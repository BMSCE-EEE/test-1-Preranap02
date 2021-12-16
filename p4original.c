#include<stdio.h>
#include<math.h>
int main()
{
  float x1,x2,y1,y2,d;
  printf("enter coordinates of x1 and y1\n");
  scanf("%f%f",&x1,&y1);
  printf("enter coordinates of x2 and y2\n");
  scanf("%f%f",&x2,&y2);
  d=sqrt((x2-x1)*(x2-x1)+(y2-y1)*(y2-y1));
  printf("distance = %f",d);
  return 0;
  }