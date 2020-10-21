#include<stdio.h>
#include<math.h>
char * betterCompression(char *s)
{
int f=0,i=0,j=0,c,k=0,rslt=0;
static char temp[100];
for(i='a';i<='z';i++)
{
for(j=0;s[j];j++)
{
	if(i==s[j]){
	sscanf(&s[j+1],"%d",&c);
	printf("%d\n",c);
	rslt=rslt+c;
	f=1;
	}
}
if(f==1){
temp[k++]=i;
c=rslt;
rslt=0;
while(c){
rslt=rslt*10+c%10;
c/=10;
}
while(rslt){
temp[k++]=rslt%10+48;
rslt/=10;
}
}
rslt=0;
f=0;
}
return temp;
}
int main()
{
printf("%s\n",betterCompression("a12c56a1b5"));
}
