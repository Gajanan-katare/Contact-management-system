#include <stdio.h>
#include "contact.h"
int my_isalpha(char *Name)
{
   

 int i=0;
 int count=0;
while(Name[i])
{
  if(Name[i]>='a' && 'z'>=Name[i] || Name[i]>='A' && 'Z'>=Name[i] || Name[i]==' ')
  {
    count++;
  }
  i++;
}
if(i==count)
{
  return 0;
}
else
return 1;
}