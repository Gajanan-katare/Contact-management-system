#ifndef CONTACT_H
#define CONTACT_H
#include<string.h>
#include<ctype.h>

typedef struct Contact_data
{
    char Name[32];
    char Mobile_number[11];
    char Mail_ID[35];
} Contacts;

typedef struct AddressBook_Data
{
    Contacts contact_details[100];
    int contact_count;
} AddressBook;

/* Function declarations */
// void init_intitalization(AddressBook *);
int create_contact(AddressBook *);
void list_contacts(AddressBook *);
int search_contacts(AddressBook *);
int edit_contact(AddressBook *);
int delete_contact(AddressBook *);
int save_contacts(AddressBook *);
int my_isalpha(char *);
int my_number_verify(int, char *,AddressBook *);
int my_Mail_verify(char *,int ,AddressBook *);
int Load_contacts(AddressBook *);
int duplicate_contacts(char *,AddressBook *,int);
int duplicate_mail(char *,AddressBook *,int);

#endif // CONTACT_H
       // CONTACT_H