#include<stdio.h>
int main()
{
  int a;
  int b=2;
  float x=9.5;
  double y=10.5;
  long int z=50;
  double d;
  a=z/b+b*x-y;
  d=a;
  printf("integer:%d\n",a);
  printf("double :%lf\n",d);
  return 0;
}