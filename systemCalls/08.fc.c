# include <stdio.h>
# include <stdlib.h>

void main(){
	if(fopen("z.txt", "w")==NULL){
		printf("cannot create the file");
		exit(1);
	}
	else{
		printf("file is created\n");
		exit(1);
	}
}
