#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void delay(int seconds)
{
    int mseconds=1000*seconds;
    clock_t stime = clock();
    while (clock() < stime + mseconds);
}

int main(){
    printf("Student Name: Enter your name \n");
    printf("Student Number: Student num  \n");
    printf("\nCOMPUTER NAME:");
    system("hostname");
    printf("\n");
    printf("Mac address:  \n");
    system("getmac");
    printf("\n");

    FILE *fp;
    int n,i;
    int inputs[20];
    fp = fopen("log.txt", "w");

    for (int i=0;i<20;i++){
            printf("Enter input %d ",i+1);
            scanf("%d",&inputs[i]);
    }
    printf("\n");
    for (int i=0;i<20;i++){
            time_t wt;
            time(&wt);
            delay(1);
            int sqr = inputs[i]*inputs[i];
            printf("%d\t%d\t%d\t%s\n",i+1,inputs[i],sqr,ctime(&wt));
            fprintf(fp, "%d\t%d\t%d\t%s",i+1,inputs[i],sqr,ctime(&wt));
            }
fclose(fp);
    fp = fopen("log.txt", "r");
    char c = getc(fp);
    while (c != EOF) {
        if(c == '\n'){
            time_t rt;
            time(&rt);
            delay(1);
            printf("\t%s",ctime(&rt));
        }
        putchar(c);
        c = getc(fp);
    }
fclose(fp);
    getchar();
    return 0;
}
