#include <stdio.h>
#include <string.h>
#include <stdlib.h>
void delete_word(char *str){
	free(str);
}

char * delete_letter(char * str, char letter) {

	char *new = NULL;
	
	if(str != NULL){

		int i,j;
		
		new = malloc( (strlen(str)-1)*sizeof(char) );
		
		for(i = 0; i < strlen(str) && str[i] != letter ; i++); //Buscamos donde esta la letra
		
		if(i == 0) { //La letra esta al principio
			for(j = 0 ; j < strlen(str)-1 ; j++) {
				new[j] = str[j+1];
			}
		}
		
		else if(i == strlen(str)-1){ //La letra esta al final
			for(j = 0 ; j < strlen(str)-1 ; j++) new[j] = str[j]; 
			new[j] = '\0'; // J = strlen(str)-2
		}
		
		else { //La letra esta en el medio
			for(j = 0 ; j < i ; j++) new[j] = str[j]; //Copia las letras hasta el caracter en la pos i (no incluye el caracter en la pos i)
			for(j = i ; j < strlen(str)-1 ; j++) new[j] = str[j+1];
		}
		
	}
	
	return new;

}

short search_letter(const char *str , char letter){

	int found = 0 , i ;
	
	for(i = 0; i < strlen(str) && str[i] != letter ; i++);
	
	if(str[i] == letter) found = 1;
	
	return found;

}


//Recordar que para agregar una letra, se debe hacer word = add_letter(word,letter)

char * add_letter(char *str, char letter){

	char * new = NULL;

	if (str == NULL){ // lugar para 2 pos 0 lettrt pos 1 '\0'
	  new = malloc(sizeof(char)*2);
	  new[0] = letter;
	  new[1] = '\0';
	}
	else{
		int i;
		//printf("new ahora ocupa %ld\n", strlen(str)*sizeof(char)+1);
		new = malloc(strlen(str)*sizeof(char)+1);
	
 		int length = strlen(str);
  
 		for(i = 0; i < length ; i++) new[i] = str[i];
  
		new[i] = letter;
 		new[i+1] = '\0';
 		
  
  }
  
  return new;
}

/*
void add_letterV2(char *str, char letter){ //Usa realloc

	char * new = NULL;

	if (str == NULL){ // lugar para 2 pos 0 lettrt pos 1 '\0'
	  new = malloc(sizeof(char)*2);
	  new[0] = letter;
	  new[1] = '\0';
	}
	else{
		int i;
		//printf("new ahora ocupa %ld\n", strlen(str)*sizeof(char)+1);
		new = malloc(strlen(str)*sizeof(char)+1);
	
 		int length = strlen(str);
  
 		for(i = 0; i < length ; i++) new[i] = str[i];
  
		new[i] = letter;
 		new[i+1] = '\0';
  
  }
  
  str = new;
}
*/

/*
int main(){
	char *str;
	str = NULL;
	
	int c;
	
	c = getchar();
	while(c != '\n'){
		str = add_letter(str,c);
		printf("str contiene \"%s\" y ocupa %ld\n",str,strlen(str));
		c = getchar();
		
	}
	
	printf("La palabra formada es : %s\n",str);

}
*/
