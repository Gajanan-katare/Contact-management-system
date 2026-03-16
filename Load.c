#include <stdio.h>
#include "contact.h"
int Load_contacts(AddressBook *addressbook)
{
   FILE *fp2;
   if((fp2=fopen("Data.txt","r"))==NULL)
{
    fprintf(stderr,"Data File not found!\n");
    return 0;
}
fscanf(fp2,"#%d\n",&addressbook->contact_count);
// printf("%d\n",addressbook->contact_count);
for(int  i=0;i<addressbook->contact_count;i++)
{
fscanf(fp2,"%[^,],%[^,],%[^\n]\n",addressbook->contact_details[i].Name,addressbook->contact_details[i].Mobile_number,addressbook->contact_details[i].Mail_ID);
}
fclose(fp2);
}