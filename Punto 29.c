

#include "pila.h"
#include <stdio.h>

int main(){

	ptr_node pila;
	
	int c;
	char elem;
	
	crear_pila(&pila);
	
	c = getchar();
	while( c != EOF && c != '\n') {
		apilar(&pila,c);
		c = getchar();
	}
	
	//destruir_pila(&pila);
	
	if(pila == NULL) printf("pila es null\n");
	else{
		while(pila != NULL){
			desapilar(&pila,&elem);
			printf("%c",elem);
		}
	}
	
		

}
