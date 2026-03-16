#include <stdio.h>
#include "contact.h"
int search_contacts(AddressBook *addressbook)                                   //search contact
{
    int search;
    scanf("%d",&search);
    char *ret1;
    char *ret2;
    char *ret3;
    int range =addressbook->contact_count;
    int count=0; 


    if(search==1)                                                               //search by Name
    {
        char Name_search_str[20];
        printf("Enter The Name  :- ");
        scanf("%s",Name_search_str);

    printf("------------------------------------------------------------------------------------------------\n");
    printf("Sr.Number|       Name        |    Phone_Number     |           Mail_ID                         |\n");
    printf("------------------------------------------------------------------------------------------------\n"); 

   
    

    for(int i=0;i<=range;i++)
    {
    ret1 = strstr(addressbook->contact_details[i].Name,Name_search_str);
    if(ret1)
    {
   
        printf("%-15d %-18s %-25s %-30s\n",
        i+1,addressbook->contact_details[i].Name,addressbook->contact_details[i].Mobile_number,addressbook->contact_details[i].Mail_ID);
    
    }
    }
 

    
    }
    else if(search==2)                                                          //search by number
    {
      char Number_search_str[20];
        printf("Enter The Number  :- ");
        scanf("%s",Number_search_str);
    for(int i=0;i<=range;i++)
    {
    ret2 = strstr(addressbook->contact_details[i].Mobile_number,Number_search_str);
    if(ret2)
    {
    printf("%-15d %-18s %-25s %-30s\n",
        i+1,addressbook->contact_details[i].Name,addressbook->contact_details[i].Mobile_number,addressbook->contact_details[i].Mail_ID);
    printf("\n");
    }
    }  
    
    }
    else if(search==3)                                                          //search by Email
    {
         char Mail_search_str[20];
        printf("Enter The Mail_Id  :- ");
        scanf("%s",Mail_search_str);
    for(int i=0;i<=range;i++)
    {
    ret3 = strstr(addressbook->contact_details[i].Mail_ID,Mail_search_str);
    if(ret3)
    {
    printf("%-15d %-18s %-25s %-30s\n",
        i+1,addressbook->contact_details[i].Name,addressbook->contact_details[i].Mobile_number,addressbook->contact_details[i].Mail_ID);
    printf("\n");
    }

    }
    }
    printf("------------------------------------------------------------------------------------------------\n"); 

    

    return 0;
}