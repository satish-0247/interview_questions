#include<stdio.h>
#include<string.h>
char* rev(char *ptr)
{
	int i,j;
	char temp;
for(i=0,j=strlen(ptr)-1;i<j;)
{
if(isdigit(ptr[i]))
i++;
else if(isdigit(ptr[j]))
j--;
else
{
temp=ptr[i];
ptr[i]=ptr[j];
ptr[j]=temp;
i++;j--;
}
}
return ptr;
}
int main()
{
char str[50]="sd34df5",*ptr;
ptr=rev(str);
printf("%s\n",ptr);
}
