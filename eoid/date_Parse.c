#include<stdio.h>
main()
{
int day,mth,year,hr,mm,sec;
char date[100]={0};
/*
 * write code for valid date
 */

scanf("%d%d%d%d%d%d",&day,&mth,&year,&hr,&mm,&sec);
sprintf(date,"%d-%d-%d %d:%d:%d\n",day,mth,year,hr,mm,sec);
printf("%s",date);
}
