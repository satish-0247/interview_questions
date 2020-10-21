#include<stdio.h>
#include<string.h>
int main()
{
char buff[] = "method::INVITE\nfrom_tag::K2t5Ft125SevS\nto_tag::v4gHZQU219QFr\ncallid::3bd35816-9de8-48b6-aff6-8b0da83ce795\nsip_code::487\nsip_reason::Request Terminated\ntime::1563431755\ncdr_dialednumber::\n",*found;
found=buff;
do
{
	if(found=strstr(found,"::"))
printf("\"%s\"",ptr);
putchar(':');
else if
putchar(',');
ptr=strtok(NULL,del);	
cnt++;
}while(ptr);

}
