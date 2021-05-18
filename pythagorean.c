#include<stdio.h>
#include<cs50.h>
void main()
  {
  float a = get_float("side 1 ");
  float b = get_float("side 2 ");
  float c = get_float("side 3 ");
  float d = (a*a)+(b*b);
  float e = c*c;
  if(d == e)
    printf("Yes");
  else 
    printf("No");
  }
  
