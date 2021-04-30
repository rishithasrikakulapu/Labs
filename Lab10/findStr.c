#include<stdio.h>
#include<string.h>

int main(){
char word[20],smallest_word[20],largest_word[20];
int count = 1;

do
{
	printf("Enter word: ");
	scanf("%s",&word);
	
	if(strlen(word)>21)
	break;
    	
	if (count || (strcmp(word, largest_word) > 0))
        strcpy(largest_word, word);
    
	if (count || (strcmp(word, smallest_word) < 0))
        strcpy(smallest_word, word);
    
	count = 0;
} while(strlen(word)!=4);

printf("Smallest word: %s\n",smallest_word);
printf("Largest word: %s\n",largest_word);

return 0;
}
