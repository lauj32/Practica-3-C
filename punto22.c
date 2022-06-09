
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "create_word.h"


void replace (char *car1 , char *car2){

	*car1 = *car2;

}

int compare (const char car1,const char car2){

	if(car1 == car2) return 0;
	else return 1;


}

int main(int argc , char **argv){
	
	if(argc == 3){
	
		char *word;
		char *car = malloc(1*sizeof(char));
		int c;
		
		c = getchar();
		while( c != EOF ) {
		
			word = NULL;
			
			//El programa llega hasta acas
			while( (c != '\n')&&(c != EOF) ) {
				word = add_letter(word,c);
				c = getchar();
			}
			
			//Puede leer una palabra tambien...
			
			for(int i = 0; i < strlen(word); i++) {
				*car = word[i];
				if((compare(*car,argv[1][0])) == 0) replace(&word[i],&argv[2][0]);
			}
			
			printf("%s\n",word);
			
			delete_word(word);
			
			if(c != EOF) c = getchar();
			
		} //Fin del while
		
		
	}
	else exit(1);


}
