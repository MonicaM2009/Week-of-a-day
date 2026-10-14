#include<stdio.h>
int main(){
int dno;
printf("\n enter day no: ");
scanf("%d",&dno);
switch(dno)
{
   case 1:
   printf("\n mon");
   
   case 2:
   printf("\n tue");
   break;
   case 3:
   printf("\n wed");
   break;
   case 4:
   printf("\n thu");
   break;
   case 5:
   printf("\n fri");
  break;
   case 6:
   printf("\n sat");
  break;
  case 7:
   printf("\n sun");
  break;
default:
printf("\nwrong day no");   }}