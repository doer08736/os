# include <stdio.h>

int main(){
	char str[100];
	FILE *fp = fopen("file1.dat", "w+");
	printf("enter the string: ");
	fgets(str, 100, stdin);
	while(!feof(fp))
		fscanf(fp, "%s", str);
	fprintf(fp, "%s", str);
}
