#include <stdio.h>
#include "contact.h"

int duplicate_contacts(char *Mobile_number,AddressBook *addressbook,int index)
{
int rt=0;
for(int i=0;i<addressbook->contact_count;i++)
{
  if(!(i==index))
  if((strcmp(Mobile_number,addressbook->contact_details[i].Mobile_number))==0)
  {
  return 4;
  }
  
}
return 0;
}