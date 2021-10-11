// Try yourself 1
#include<stdio.h>
#include<string.h>
 
int main() 
{
   char names[7][20];
   char t[20];
   int i, j;
   int size = 7;
 
   for (i = 0; i < size; i++)
    {
      printf("\nEnter name: \n");
      fgets(names[i], sizeof(names), stdin);
    }

   for (i = 1; i < size; i++)
    {
      for (j = 1; j < size; j++)
	   {
         if (strcmp(names[j - 1], names[j]) > 0) 
		 {
            strcpy(t, names[j - 1]);
            strcpy(names[j - 1], names[j]);
            strcpy(names[j], t);
         }
      }
   }
 
   printf("\nNames after arranged: ");
   for (i = 0; i < size; i++) 
   {
      printf("\n%s", names[i]);
   }
   return(0);
}

