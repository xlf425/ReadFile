#include <stdlib.h>
#include <stdio.h>
#include <string.h>

int main () {
    FILE *fp;
    char c;

    fp = fopen("dico.txt","r");
    if(fp!=NULL)
		{
			printf("oui\n");
			while((c = fgetc(fp))!=EOF)
			{
				printf("%c", c);
			}
    }

		else {
			printf("non");
		}

		fclose(fp);

    return(0);
}
