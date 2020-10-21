#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
int main()
{
int i,j,x,y,n;
char car[3][6]={'*','*','*','*','*','*','*','*','*','*','*','*','*','*','*','*','*','*'};
while(1)
{
printf(" \n\ncurrent  status \n\n");
for(i=0;i<3;i++,printf("\n"))
	for(j=0;j<6;j++)
		printf(" %c ",car[i][j]);
printf("    \n\n1:CARIN 2:CAROUT\n\n ");
scanf("%d",&n);
if(n==1)
{
for(i=0;i<3;i++)
for(j=0;j<6;j++)
if(car[i][j]=='*'){
car[i][j]='0';i=4;
}
if(i==3)
	printf(" NO SPACE\n");
}
else if(n==2)
{
printf("enter coradinates:" );
scanf("%d%d",&x,&y);
if(car[x][y]=='0')
	car[x][y]='*';
	else{
	printf("\n\n                         ALREADY VECANT\n\n");
	sleep(2);}
}
}
}
