//try yourself 2 ss11
#include<stdio.h>
#include<string.h>
#include<conio.h>
main()
{
	int j = 0; int vowel = 0;
	char text[100];
	
	printf("Enter a line of text: ");
	fgets(text, sizeof(text), stdin);// ham fgets() la ham nhap vao chuoi chua space, co the dung gets nhung khong uu tien
	strlwr(text); // ham strlwr() la ham chuyen chuoi tu chu in hoa sang chu thuong
	
	    for(j=0; j < 100; j++)
	    {
	        if(text[j] == 'a' || text[j] == 'e' || text[j] == 'i' || text[j] == 'o' || text[j] == 'u')
		        vowel++;
		        }
//	printf("\nLine of text : ");
//	puts(text);	   ham puts() la ham xuat ra chuoi chua dau space 
	printf("\nNumbers of vowels in a line of text is: %d", vowel);
	
	return 0;
}	
