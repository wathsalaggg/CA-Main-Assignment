#include <stdio.h>
#include <stdlib.h>
struct{
 int num,sqr;
 time_t t;
}f[20];
int main(){
 int num,sqr, c=1;
 time_t t;
 printf("Student Name:   \n");
 printf("Student Number: \n");
 system("getmac");
 printf("\n");
 printf("Computer Name: ");
 system("hostname");
 printf("\n");
 printf("Enter numbers to find the square value.");
 printf("\n");
 for(int i=0; i<20; i++){
 printf("(%d) Enter a number : ",i+1);
 scanf("%d",&f[i].num);
  time(&f[i].t);
 f[i].sqr=f[i].num*f[i].num;   }
 printf("\n");
 for(int i=0; i<20; i++){
 printf("(%d) Square value of %d is: %d \t",i+1,f[i].num,f[i].sqr);
 printf("%s",ctime(&f[i].t));   }}


