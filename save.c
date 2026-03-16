#include <stdio.h>
#include "contact.h"

int save_contacts(AddressBook *addressbook)
{
    
    FILE *fp;

    fp=fopen("Data.txt","w");
    if(fp==NULL)
    {
        fprintf(stderr,"File not found\n");
        return 0;
    }
    fprintf(fp,"#%d\n",addressbook->contact_count);
    printf("%d\n",addressbook->contact_count);
    for(int i=0;i<addressbook->contact_count;i++)
    {
    fprintf(fp,"%s,%s,%s\n",addressbook->contact_details[i].Name,addressbook->contact_details[i].Mobile_number,addressbook->contact_details[i].Mail_ID);
    }
    fclose(fp);

    return 0;
}