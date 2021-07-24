#include <stdio.h>
#include <stdlib.h>
struct forfile{
 int num,sqr;
 time_t t;
}f[20];
int main()
{    FILE *Fpoint;
 FILE *formac;
 char fmac[100];
 system("getmac > formac.txt");
 Fpoint=fopen("log1.txt","w");
 formac=fopen("formac.txt","r");
 for(int i=1; fgets(fmac,100,formac); i++){
 if(i==4){
 fscanf(formac,"%s",fmac);
 break;
 }  }
 fclose(formac);
 int num,sqr, c=1;
 time_t t;
 printf("Student Name:   \n");
 fprintf(Fpoint,"Student Name: \n");
 printf("Student Number: \n");
 fprintf(Fpoint,"Student Number:\n");
 system("getmac");
 fprintf(Fpoint,"Mac Address: %s\n",fmac);
 printf("\n");
 printf("Computer Name: ");
 system("hostname");
 printf("\n");
 printf("Enter numbers to find the square value.");
 if(Fpoint==NULL){
 printf("Unable to create the log file!\n");
 exit(EXIT_FAILURE);  }
 printf("\n");
 for(int i=0; i<20; i++){
 printf("(%d) Enter a number : ",i+1);
 scanf("%d",&f[i].num);
 time(&f[i].t);
 f[i].sqr=f[i].num*f[i].num;
 }
 printf("\n");
 for(int q=0; q<20; q++){
 printf("(%d) Square value of %d is: %d \t",q+1,f[q].num,f[q].sqr);
 printf("%s",ctime(&f[q].t));
 fprintf(Fpoint,"(%d) Square value of %d is  %d  \t",q+1,f[q].num,f[q].sqr);
 fputs(ctime(&f[q].t),Fpoint);  }
 fclose(Fpoint);  }
