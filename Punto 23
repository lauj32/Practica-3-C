
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

	char arg1[] = {"-d"};
	char arg2[] = {"-delete"};
	char arg3[] = {"-h"};
	
	if( (argc == 3) && ( (strcmp(argv[1],arg1)) == 0 || (strcmp(argv[1],arg2)) == 0 ) ){ //caso
	
		char *word;
		int c;
		
		c = getchar();
		while( c != EOF ) {
		
			word = NULL;
			
			while( (c != '\n')&&(c != EOF) ) {
				word = add_letter(word,c);
				c = getchar();
			}
			
			while( search_letter(word,argv[2][0]) == 1) word = delete_letter(word,argv[2][0]);
			
			
			printf("%s\n",word);
			
			delete_word(word);
			
			if(c != EOF) c = getchar();
			
		} //Fin del while
	
		
	}
	
	else if(argc == 3){ //Caso
	
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
	
	else if(argc == 2) { //caso
	
		if( (strcmp(argv[1],arg3)) == 0) {
			printf("Uso : tr ARG1 ARG2 \n tr -d ARG1 \n tr -delete ARG1 \n");
			return 0;
		 }
		else {
			printf("Argumento invalido \n Pruebe con tr -h \n");
			return 1;
		}
	} 
	
	else if(argc < 2){ //caso
		fprintf(stderr,"Faltan argumentos\n Pruebe con tr -h\n");
		return 1;
	}
	
	else if(argc > 3){ //caso
		fprintf(stderr,"Demasiados argumentos\n Pruebe con tr -h\n");
		return 1;
	} 
	
	else exit(1);


}
