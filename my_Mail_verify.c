#include <stdio.h>
#include "contact.h"

int my_Mail_verify(char *Mail_ID,int size,AddressBook *addressbook)
{
  int j=0;
  int count=0;
 if(Mail_ID[0]=='@')
 {
  int re6=6;
  return re6;
 }
  char str1[5]=".com";

  int i=size-4;
  
  char tem[5];
  int k=0;
  for(int k=0;k<=4;k++)//the orignal string .com is copying into new string 
  {
    tem[k]=Mail_ID[i];
    i++;
   
  }
  int small=0;
  while(Mail_ID[j])
  {
    if(Mail_ID[j]=='@')//only one @ requred
    {
      count++;
    }
    if(Mail_ID[j]>='A'&&'Z'>=Mail_ID[j])//only small alpha allowed
    {
      small++;
    }
    j++;
  }
  if(count!=1)
  {
    int n=3;
    return n;
  }

  if(small!=0)
  {
    int sm=4;
    return sm;
  }

 

  int rt= strcmp(str1,tem);//orignal string back 4 character compair as per requrment
  if(rt!=0)
  {
    int cm=2;
    return cm;
  }
int l=0,start_index=0,end_index=0;
  while(Mail_ID[l])//collecting @ and . index
  {
    if(Mail_ID[l]=='@')
    {
      start_index=l;
    }
    else if(Mail_ID[l]=='.')
    {
      end_index=l;
    }
    l++;
  }
 int ok=0;
 if(start_index+1>end_index-1)
 {
  int rt5=5;
  return rt5;
 }
  for(int i=start_index+1;i<end_index-1;i++)//checking btween @ and . is only small alphabet
  {
    if(Mail_ID[i]>='a' && Mail_ID[i]<='z')
    {
     
    }
    else
    {
      ok=1;
      break;
    }
  }
  if(ok)
  {
    return 7;
  }




for(int i=0;i<addressbook->contact_count;i++)
{
 if((strcmp(Mail_ID,addressbook->contact_details[i].Mail_ID))==0)
{

return 8;
}
}

  if(rt==0 && count==1 && ok==0 && small==0)//if all test pass then return 0
  {
    return 0;
  }
  return 1;
 
  
}