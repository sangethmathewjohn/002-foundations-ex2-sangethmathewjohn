#include <stdio.h>
#include <cs50.h>
void main()
{
int type = get_int("Enter type of pattern ( 1 0r 2 ) \n");
int rows = get_int("Number of rows \n");
int i,j;

//program for type 1
if(type == 1){
  for(i=1;i<=rows;i++){
     for(j=1;j<=rows-(i-1);j++){
        printf("#");}
          printf("\n");}}

//program for type 2
if(type == 2){
  for(i=1;i<=rows;i++){
    for(j=1;j<=rows-i;j++){
       printf(" ");}
         for(j=1;j<=i;j++){
           printf("#");}
           printf("\n");}}

}

