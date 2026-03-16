#include <stdio.h>
#include "contact.h"

int duplicate_mail(char *Mail_ID,AddressBook *addressbook,int index)
{
int rt=0;
for(int i=0;i<addressbook->contact_count;i++)
{
  if(!(index==i))
 if((strcmp(Mail_ID,addressbook->contact_details[i].Mail_ID))==0)
{
int r=4;
return r;
}
}
 
return 0;
}