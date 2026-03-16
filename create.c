#include <stdio.h>
#include "contact.h"

// Function Definitions
int create_contact(AddressBook *addressbook)                                    //create contact
{
   int Super_loop=1;
   
   while(Super_loop)
   {
    
    printf("\n");

    repet1:
    printf("Enter Name          :- ");                                          //Name with validtion
    scanf(" %[^\n]",addressbook->contact_details[addressbook->contact_count].Name);
    int ret=my_isalpha(addressbook->contact_details[addressbook->contact_count].Name); 
    if(ret!=0)
    {
        printf("Name should contain only alphabets and space! Try again.\n");
        goto repet1;
    }

    
    repet2:
    printf("Enter Mobile_Number :- ");                                          //Number with validtion
    scanf(" %[^\n]",addressbook->contact_details[addressbook->contact_count].Mobile_number);

    // int rt=duplicate_contacts(addressbook->contact_details[addressbook->contact_count].Mobile_number,addressbook);

    int num=strlen(addressbook->contact_details[addressbook->contact_count].Mobile_number);
    int ret2 = my_number_verify(num,addressbook->contact_details[addressbook->contact_count].Mobile_number,addressbook);

    if(ret2==1)
    {
        printf("\nMobile number shuld only have 10 digit! Try again.\n");
        printf("\n");
        goto repet2;
    }
    else if(ret2==2)
    {
        printf("\nMobile number shuld contain only numbers! Try again.\n");
         printf("\n");
        goto repet2;
    }
     else if(ret2==3)
    {
        printf("\nFirst number of mobile number shuld be in range of 6 to 9! Try again.\n");
        printf("\n");
        goto repet2;
    }
        else if(ret2==4)
    {
        printf("\nNumber is already saved! Try again.\n");
        printf("\n");
        goto repet2;
    }



    repet3:
    printf("Enter Mail_ID       :- ");                                          //Email.ID with validtion
    scanf(" %[^\n]",addressbook->contact_details[addressbook->contact_count].Mail_ID);

    

    int len_mail=strlen(addressbook->contact_details[addressbook->contact_count].Mail_ID);
    int ret3=my_Mail_verify(addressbook->contact_details[addressbook->contact_count].Mail_ID,len_mail,addressbook);
    if(ret3==1)
    {
        printf("\n");
        printf("Invalid email ID\n");
        goto repet3;
    }
    else if(ret3==2)
    {
        printf("\n");
        printf("Invalid email ID It should be Ended like '.com'\n");
        goto repet3;
    }
    else if(ret3==3)
    {
        printf("\n");
        printf("Invalid email ID It Only Requred ONE '@'\n");
        goto repet3;
    }
     else if(ret3==4)
    {
        printf("\n");
        printf("Invalid email ID only lower case is Allowed\n");
        goto repet3;
    }
    else if(ret3==5)
    {
        printf("\n");
        printf("Domain name should be present after @symbol! Try again.\n");
        goto repet3;
    }
    else if(ret3==6)
    {
        printf("\n");
        printf("Invalid Email ID: Enter a valid username before @domain.com\n");
        goto repet3;
    }
    else if(ret3==7)
    {
        printf("\n");
        printf("Domain name should not have numbers! Try again.\n");
        goto repet3;
    }
     else if(ret3==8)
    {
        printf("\n");
        printf("Mail already saved! Try again.\n");
        goto repet3;
    }
   
     
     printf("😊 Contact saved!\n");
     printf("\n");
     
    addressbook->contact_count++;
    printf("Want Add One More Contact\n");
    printf("1. YES\n2. NO\n");

    scanf("%d",&Super_loop);
     
  
   
    if(Super_loop==2)
    {
    Super_loop=0;
    break;
    }
   
   
    }
   
   return 0;

}