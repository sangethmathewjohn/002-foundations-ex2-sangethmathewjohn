#include<stdio.h>
#include<cs50.h>
int main(void)
  {
  
  float a = get_float("side 1 ");
  float b = get_float("\nside 2 ");
  float c = get_float("\nside 3 ");
  if(a>c && a>b)
   if(((c*c)+(b*b))==(a*a))
     printf("Yes \n");
  else
     printf("No \n");
  if(c>b && c>b)
    if(((a*a)+(b*b))==(c*c))
     printf("Yes \n");
  else
     printf("No \n");
  if(b>a && b>c)
    if(((a*a)+(c*c))==(b*b))
     printf("Yes \n");
  else
     printf("No \n");
    
  }
  
