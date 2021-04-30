#include<stdio.h>

//Write the declaration of function split_time

void split_time(int, int*, int *, int *);

int main(){
	int n,hr,min,sec;
	printf("Enter seconds:");
	scanf("%d",&n);
	
	split_time(n,&hr,&min,&sec);

	printf("Converted format: %d hour %d mins %d secs\n", hr, min, sec);

	return 0;

	}

	void split_time(int total_sec, int *hr, int *min, int *sec){
	*hr = total_sec/3600;
	*min = (total_sec-(*hr * 3600))/60;
	*sec = (total_sec-(*hr * 3600)-(*min * 60));

	}
