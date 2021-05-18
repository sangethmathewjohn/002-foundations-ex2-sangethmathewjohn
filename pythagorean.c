#include<stdio.h>
#include<cs50.h>
void main()
  {
  float a = get_float("side 1 ");
  float b = get_float("side 2 ");
  float c = get_float("side 3 ");
  if(((a*a)+(b*b))==(c*c))
    printf("yes");
  else 
    printf("NO");
  }
  
