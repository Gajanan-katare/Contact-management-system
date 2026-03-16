#include<stdio.h>
#include "contact.h"

void list_contacts(AddressBook *addressbook)                                    //all contact display
{
    
    printf("============================================================================================\n");
    printf("*                                     ALL CONTACT DETAIL'S                                 *\n");
    printf("============================================================================================\n");
    // printf("\n");
    printf("--------------------------------------------------------------------------------------------\n");
    printf("Sr.Number|       Name        |    Phone_Number     |           Mail_ID                     |\n");
    printf("--------------------------------------------------------------------------------------------\n");
    for(int i=0;i<addressbook->contact_count;i++)
    {

    printf("\n");
    printf("%-13d %-20s %-25s %-30s\n",
        i+1,addressbook->contact_details[i].Name,addressbook->contact_details[i].Mobile_number,addressbook->contact_details[i].Mail_ID);
    // printf("\n");

    }
    printf("--------------------------------------------------------------------------------------------\n"); 
}






