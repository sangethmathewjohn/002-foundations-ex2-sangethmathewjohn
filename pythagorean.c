#include<stdio.h>
#include<cs50.h>
int main(void)
  {
  float a = get_float("side 1 ");
  float b = get_float("\nside 2 ");
  float c = get_float("\nside 3 ");
  float d = ((a*a)+(b*b));
  float e = (c*c);
  if(d == e)
    printf("Yes \n");
  else 
    printf("No \n");
  }
  
