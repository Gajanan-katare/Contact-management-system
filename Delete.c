#include<stdio.h>
#include "contact.h"
int delete_contact(AddressBook *addressbook)
{
    back:
    int size=addressbook->contact_count;
    printf("\nSearch Contact menu : \n1.Name \n2.Mobile number\n3.Mail ID\n4.Exit\nEnter the option : ");
    search_contacts(addressbook);
    int index;
    printf("To Delete Enter The Sr. Number  :- ");
    scanf("%d",&index); 

    for(int i=index-1;i<=size;i++)
    {
       addressbook->contact_details[i]=addressbook->contact_details[i+1]; 
       
    }
    addressbook->contact_count--;

    int option;
    printf("You want to Exit from delete menu\n1.YES\n2.NO\n");
    printf("Enter the option:-  ");
    scanf("%d",&option);
    if(option==2)
    {
        goto back;
    }
    return 0;
}