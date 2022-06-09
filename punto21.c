#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include "create_word.h"
int main(int argc ,char **argv){
	
	char argh[] = {"-h"};
	char argh2[] = {"-help"};
	
	if(argc == 3){
	
		char arg1[] = {"-nF"};
		
		int c , line = 0;
		char *word;
		
		/*
		printf("Argumento 0 : %s\n",argv[0]);
		printf("Argumento 1 : %s\n",argv[1]);
		printf("Argumento 2 : %s\n",argv[2]);
		*/
		
		if(strcmp(argv[1],arg1) == 0){ 
		
			c = getchar();
			while(c != EOF){
			
				word = NULL;
			
				while( c != '\n') { //Termina de leer una palabra cuando lee un \n
					word = add_letter(word,c);
					c = getchar();
				}
				
				line++;
				
				if(strcmp(word,argv[2]) == 0){
					printf("%d:%s\n",line,word);
					delete_word(word);
					c = getchar();
				}
				else {
					delete_word(word);
					c = getchar();
				}
				
			} // c == EOF
			
		} 

	}
	else if( argc == 2 &&((strcmp(argv[1],argh) == 0) || (strcmp(argv[1],argh2)) ==0)) printf("Usage: ./grep -nF PATTERN\n");
	
	else if(argc == 2) {
		fprintf(stderr,"Pruebe -h o -help para mas informacion\n");
		exit(1);
	}
	else if(argc < 2) {
		fprintf(stderr,"Faltan argumentos\n");
		exit(1);
	}
	else if(argc > 3){
		fprintf(stderr,"Too many arguments\n");
		exit(1);
	}
	
}
