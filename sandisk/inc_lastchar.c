#include<stdio.h>
char* inc_lastchar(char *ptr)
{
static char str[20];/*life is through out process*/
int i,rslt=0,j;
for(i=0;ptr[i];i++)
	rslt=rslt*10+ptr[i]-48;

if(rslt%10<9)
	i--;
rslt++;
/*ippudu rslt 128 i value is 3*/

for(j=i;j>=0;j--){
	str[j]=rslt%10+48;
	rslt/=10;
	}
return str;
}
int main()
{

char str[20]="127";char *ptr;
//printf("....%d\n",str[0]);
ptr=inc_lastchar(str);
printf("%s\n",ptr);
}
