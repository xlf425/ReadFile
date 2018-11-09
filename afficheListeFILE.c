#include <stdlib.h>
#include <stdio.h>
#include <string.h>

int main () {
	FILE *fp;
	char c;
	int i=0, j=0;
	//char* listeMot= (char*)malloc(sizeof(char)*10*10);
	fp = fopen("dico.txt","r");
	if(fp!=NULL)
	{
		printf("done\n\n");
		while((c = fgetc(fp))!=EOF)
		{
			//listeMot[i][j]= c;
			//if(c=='\n')
			//{
			//	}
			//	i++;
			printf("%c", c);
		}
	}
	else
	{
		printf("non");
	}
	//printf("%c\n",listeMot[2][2]);
	fclose(fp);

	return(0);
}
