#include <stdio.h>
#include <cs50.h>
int main(void)
{
int i,j;
int type = get_int("Enter type of pattern (1 or 2) ");
int rows = get_int("Number of rows");


//program for type 1
if(type == 1)
{
  for(i=rows;i>0;i--)
  {
     for(j=0;j<i;j++)
     {
        printf("#");
     }
          printf("\n");
  }
}  
  
//program for type 2
else if(type == 2)
{
  for(i=rows;i>0;i--)
  {
    for(j=0;j<rows;j++)
    {
      if(j>=i-1)
      {
       printf("#");
      }
      else
      {
       printf(" ");
      }
    }
     printf("\n");
  }
}
else
  printf("invlaid");
}
