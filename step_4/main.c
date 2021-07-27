#include <stdio.h>
#include <stdlib.h>
struct forfile{
 int num,sqr;
 time_t t;

}f[20];
int main()
{
 FILE *Fpoint;
 FILE *formac;
 char findmac[100];
 int op;
 time_t ct;
 system("getmac > formac.txt");
 Fpoint=fopen("log.txt","w");
 formac=fopen("formac.txt","r");
 for(int i=1; fgets(findmac,100,formac); i++){
 if(i==4){
 fscanf(formac,"%s",findmac);
 break;
 }
 }
 fclose(formac);
 fprintf(Fpoint,"===========================================\n");

 printf("Student Name: \n");
 fprintf(Fpoint,"Student Name: \n");
 printf("Student Number : \n");
 fprintf(Fpoint,"Student Number : \n");
  system("getmac");
 fprintf(Fpoint,"Mac Address: %s\n",findmac);
 printf("\n");
 printf("Computer Name: ");
 system("hostname");
 printf("\n");
 printf("Find the Square Value\n");
 if(Fpoint==NULL){
 printf("Cannot create this text file..!\n");
 exit(EXIT_FAILURE);
 }
 printf("\n");
 for(int i=0; i<20; i++){
 printf("(%d) Enter a number : ",i+1);
 scanf("%d",&f[i].num);
 time(&f[i].t);
 f[i].sqr=f[i].num*f[i].num;}
 printf("\n");
 for(int j=0; j<20; j++){
 printf("(%d) Square value of %d is: %d  \t",j+1,f[j].num,f[j].sqr);
 printf("%s",ctime(&f[j].t));
 fprintf(Fpoint,"(%d) Square value of %d is: %d  \t",j+1,f[j].num,f[j].sqr);
 fputs(ctime(&f[j].t),Fpoint); }
 fprintf(Fpoint,"=============================================");
 fclose(Fpoint);
 printf("\n");
 printf("Press (1) to read the written text file\n");
 printf("Press (2) to exit \n\n");
 printf("Choose a option : ");
 scanf("%d",&op);
 if(op==1){
 Fpoint=fopen("log.txt","r");
 if(Fpoint==NULL){
 printf("Cannot open this text file..!\n");
 exit(EXIT_FAILURE);}
 char line[150];
 for(int i=0; !feof(Fpoint) && i<25; i++){
 fgets(line,150,Fpoint);
 puts(line);}
 time(&ct);
 fclose(Fpoint);}
 else if(op==2){
 exit(EXIT_FAILURE);}
 printf("Current time is: %s",ctime(&ct));}
