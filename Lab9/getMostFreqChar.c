#include<stdio.h>
#include<string.h>

int main(int argc, char *argv[] ){
	char const* const txtFile = argv[1];
	FILE* file = fopen(txtFile, "r");
	
	int array[26] = {0},l;
	
	while(1){
	l = fgetc(file);
	if(l==EOF)
		break;
	
	if(l>='a'&&l<='z')
	array[l-'a']++;
	else if(l>='A'&& l<='Z')
	array[l-'A']++;
	}

int i, max = array[0];
char j;
	for(i=0;i<26;i++){
		if(array[i]>max){
			max = array[i];
			j = i+'a';
		}
	}
	
printf("The most frequent letter is \'%c\' . It appeared %d times.\n",j,max);

fclose(file);

return 0;
}
