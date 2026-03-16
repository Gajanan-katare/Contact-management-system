#include<stdio.h>
#include "contact.h"

int edit_contact(AddressBook *addressbook)
{
    back:
    
    printf("\nSearch Contact menu : \n1.Name \n2.Mobile number\n3.Mail ID\n4.Exit\nEnter the option : ");
    search_contacts(addressbook); 


    printf("Edit Contact menu : \n1.Name \n2.Mobile number\n3.Mail ID\n4.All Edit\n5.Exit\nEnter the option : ");
    int option;
    scanf("%d",&option);
    // list_contacts(addressbook);
    if(option==1)                                                           //Edit name only
    {
    int i;
    int ret;
    printf("\n");
    printf("\nWich one Want To Edit Enter serial Number :- ");
    scanf("%d",&i);
    printf("\n");
    repet1:
    printf("Enter Name          :- ");
    scanf(" %[^\n]",addressbook->contact_details[i-1].Name);

    ret=my_isalpha(addressbook->contact_details[i-1].Name); 
    if(ret!=0)
    {
        printf("Enter only Alphabet\n");
        goto repet1;
    }
    }
    else if(option==2)                                                      //Edit Number only
    {
    int i;
    printf("\n");
    printf("Wich one Want To Edit Enter serial Number :- ");
    scanf("%d",&i);
    printf("\n");
    repet2:

    printf("Enter Mobile_Number :- ");                                          //Number with validtion
    scanf(" %[^\n]",addressbook->contact_details[i-1].Mobile_number);

    int rt=duplicate_contacts(addressbook->contact_details[i-1].Mobile_number,addressbook,i-1);
   

    int num=strlen(addressbook->contact_details[i-1].Mobile_number);
    int ret2 = my_number_verify(num,addressbook->contact_details[i-1].Mobile_number,addressbook);

 
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
    else if(rt==4)
    {
        printf("\nNumber is already saved! Try again.\n");
        printf("\n");
        goto repet2;
    }
    else
    {
        printf("Contact Updated!\n");
    }

    }
    else if(option==3)                                                      //Edit Email only
    {
            int i;
    printf("Wich one Want To Edit Enter serial Number :- ");
    scanf("%d",&i);

    repet3:
    printf("Enter Mail_ID       :- ");                                          //Email.ID with validtion
    scanf(" %[^\n]",addressbook->contact_details[i-1].Mail_ID);

    int rt=duplicate_mail(addressbook->contact_details[i-1].Mail_ID,addressbook,i-1);

    int len_mail=strlen(addressbook->contact_details[i-1].Mail_ID);
    int ret3=my_Mail_verify(addressbook->contact_details[i-1].Mail_ID,len_mail,addressbook);
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
     else if(rt==4)
    {
        printf("\n");
        printf("Mail already saved! Try again.\n");
        goto repet3;
    }
    else
    {
        printf("Mail_ID Updated !\n");
    }

    }
    else if(option==4)                                                      //Edit all
    {
    int i;
    int ret;
    printf("Wich one Want To Edit Enter serial Number :- ");
    scanf("%d",&i);

    repe1:
    printf("Enter Name          :- ");
    scanf(" %[^\n]",addressbook->contact_details[i-1].Name);

    ret=my_isalpha(addressbook->contact_details[i-1].Name); 
    if(ret!=0)
    {
        printf("Enter only Alphabet\n");
        goto repe1;
    }
    
    repe2:

    printf("Enter Mobile_Number :- ");                                          //Number with validtion
    scanf(" %[^\n]",addressbook->contact_details[i-1].Mobile_number);

    int rt=duplicate_contacts(addressbook->contact_details[i-1].Mobile_number,addressbook,i-1);
   

    int num=strlen(addressbook->contact_details[i-1].Mobile_number);
    int ret2 = my_number_verify(num,addressbook->contact_details[i-1].Mobile_number,addressbook);

 
    if(ret2==1)
    {
        printf("\nMobile number shuld only have 10 digit! Try again.\n");
        printf("\n");
        goto repe2;
    }
    else if(ret2==2)
    {
        printf("\nMobile number shuld contain only numbers! Try again.\n");
         printf("\n");
        goto repe2;
    }
    else if(ret2==3)
    {
        printf("\nFirst number of mobile number shuld be in range of 6 to 9! Try again.\n");
        printf("\n");
        goto repe2;
    }
    else if(rt==4)
    {
        printf("\nNumber is already saved! Try again.\n");
        printf("\n");
        goto repe2;
    }
    
    repe3:
    printf("Enter Mail_ID       :- ");                                          //Email.ID with validtion
    scanf(" %[^\n]",addressbook->contact_details[i-1].Mail_ID);

    int rt1=duplicate_mail(addressbook->contact_details[i-1].Mail_ID,addressbook,i-1);
    int len_mail=strlen(addressbook->contact_details[i-1].Mail_ID);
    int ret3=my_Mail_verify(addressbook->contact_details[i-1].Mail_ID,len_mail,addressbook);
    if(ret3==1)
    {
        printf("\n");
        printf("Invalid email ID\n");
        goto repe3;
    }
    else if(ret3==2)
    {
        printf("\n");
        printf("Invalid email ID It should be Ended like '.com'\n");
        goto repe3;
    }
    else if(ret3==3)
    {
        printf("\n");
        printf("Invalid email ID It Only Requred ONE '@'\n");
        goto repe3;
    }
     else if(ret3==4)
    {
        printf("\n");
        printf("Invalid email ID only lower case is Allowed\n");
        goto repe3;
    }
    else if(rt1==4)
    {
        printf("\n");
        printf("Mail already saved! Try again.\n");
        goto repe3;
    }
    }

    int option1;
    printf("You want to Exit from edit menu\n1.YES\n2.NO\n");
    printf("Enter the option:-  ");
    scanf("%d",&option1);
    if(option1==2)
    {
        goto back;
    }
    return 0;
    
}