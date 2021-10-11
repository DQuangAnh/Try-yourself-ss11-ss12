//try yourself 2 ss12
#include<stdio.h>
#include<string.h>
#include<conio.h>
main()
{
	int i = 0; int vowel = 0, consonant = 0;
	char word[10];
	
	printf("\nEnter a word: ");
	scanf("\n%s", word);
	strlwr(word); // ham strlwr() la ham chuyen chuoi tu chu in hoa sang chu thuong
	
	   while(word[i++] != '\0')
	    {
	        if(word[i] == 'a' || word[i] == 'e' || word[i] == 'i' || word[i] == 'o' || word[i] == 'u')
		
		        vowel++;
		        
		    else
			
			    consonant++;
				   
		}
		        
	printf("\nNumbers of vowels in word is: %d", vowel);
	printf("\nNumbers of consonants in word is: %d", consonant);
	
	return 0;
}	
