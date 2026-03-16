/*
Name    :   Gajanan katare
Project :   Address Book
Date    :   26/01/2026

Address Book Project – Description

The Address Book Project is a console-based application developed in C language that allows
users to manage contact information efficiently. The system enables users to add, view, search,
edit, and delete contacts such as name, mobile number, and email ID.
 The project uses structures, arrays, and file handling to store and manage contact records.
It also includes duplicate checking to prevent storing multiple contacts with the same mobile 
number or email ID. A user-friendly menu-driven interface makes the application easy to operate.
This project helped in understanding data structures, string manipulation, modular programming, 
and real-world application development in C.
*/

#include <stdio.h>
#include <ctype.h>
#include "contact.h"
/* Structure declaration */
int main()
{


    /* Variable and structre defintion */
    int option;
    AddressBook addressbook;
    addressbook.contact_count = 0;
    Load_contacts(&addressbook);

    while (1)
    {
        printf("\nAddress book menu\n"); /* Give a prompt message for a user */
        printf("1.📞--->Add contact\n2.🔎--->search contact\n3.🛠️---->Edit contact\n4.🗑️---->Delete contact\n5.📋--->Display contact\n6.💾--->Save contact\n7.↩️---->Exit\n");
        printf("Enter the option : ");
        scanf("%d", &option);

        switch (option) /* Based on choosed option */
        {
        case 1:
        {
            create_contact(&addressbook);
            break;
        }

        case 2:
        {
            printf("\nSearch Contact menu : \n1.Name \n2.Mobile number\n3.Mail ID\n4.Exit\nEnter the option : "); /* Providing menu */
            search_contacts(&addressbook);
            break;
        }
        case 3:
            //  printf("Edit Contact menu : \n1.Name \n2.Mobile number\n3.Mail ID\n4.All Edit\n5.Exit\nEnter the option : "); /* Providing menu */

            edit_contact(&addressbook);
            break;

        case 4:
        {
            printf("Delete Contact \n"); /* Providing menu */

            delete_contact(&addressbook);
            break;
        }
        case 5:
        {
            printf("List Contacts:\n");
            list_contacts(&addressbook);
            break;
        }

        case 6:
            printf("Saving contacts\n");
            save_contacts(&addressbook);
            break;

        case 7:
            printf("INFO : Save and Exit...\n");
            return 0;

        default:
            printf("Invalid option \n");
            break;
        }
    }
    return 0;
}
