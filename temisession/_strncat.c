#include <stdio.h>
#include <string.h>

char *_strncat(char *dest, char *source, int number)
{
  
  int len = 0;
  int i = 0;
  int k = 0;
  int flag = 0;
  int size = 0;
  
  if (number <= 0)
  {
    return dest;
  }
  if (dest == NULL)
  {
    return NULL;
  }
  if (source == NULL)
  {
    return dest;
  }


if (dest[0] == '\0')
{
  while(dest[len] == '\0')
  {
    len++;
  }
}
else
{
   len = strlen(dest);
   while(dest[len] == '\0')
   {
     len++;
   }
  
}

len = len - 1;


if (dest[0] != '\0')
{
  flag = strlen(dest);
}

while (number > 0)
{
  
  if (flag < len)
  {
    dest[flag] = source[i];
  flag++;
  number--;
  i++;
  }
  else
  {
    break;
  }
}


 return dest;
}



int main() {

 
char arr1[14] = "";

char *new = _strncat(arr1, "tope is a good boy", 7);

printf("%s \n", new);


}
