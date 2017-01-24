//this file prints its own source code 

#include <stdio.h>

int main ()
{
	FILE *fp;
	char c, filename[] = "source_code.c";

	fp = fopen(filename,"r");
	while(1){
		c = fgetc(fp);
		if( feof(fp) )
      			break;
    printf("%c", c);
   }

   fclose(fp);
   return(0);
}
