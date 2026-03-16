#include <stdio.h>
#include "contact.h"

int my_number_verify(int size, char *Mobile_number,AddressBook *addressbook)
{





int i=0;
int count=0;

while(Mobile_number[i])
{
  if(Mobile_number[i]>='0' && Mobile_number[i]<='9' )
  {
    count++;
  }
 
  i++;
}

if(!(Mobile_number[0] >='6' && Mobile_number[0] <='9'))
{
  int rt3=3;
  return rt3;
}
else if(!(size==10))
{
  int r1=1;
  return r1;
}
else if(!(count==10))
{
  int rt2=2;
  return rt2;
}


for(int i=0;i<addressbook->contact_count;i++)
{

if((strcmp(Mobile_number,addressbook->contact_details[i].Mobile_number))==0)
{
return 4;
}
}


return 0;


}
