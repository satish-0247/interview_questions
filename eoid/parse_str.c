#include<stdio.h>
#include<string.h>
int main()
{
char buff[] = "method::INVITE\nfrom_tag::K2t5Ft125SevS\nto_tag::v4gHZQU219QFr\ncallid::3bd35816-9de8-48b6-aff6-8b0da83ce795\nsip_code::487\nsip_reason::Request Terminated\ntime::1563431755\ncdr_dialednumber::\n",*ptr;
char del[]="\n:";
int cnt=1;
ptr=strtok(buff,del);
do
{
printf("\"%s\"",ptr);
if(cnt%2)
putchar(':');
else
putchar(',');
ptr=strtok(NULL,del);	
cnt++;
}while(ptr);

}
