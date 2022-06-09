#include "pila.h"
#include <stdio.h>

int main(){

	ptr_node pila; //pila es un puntero a la estructura
	
	crear_pila(&pila);
	
	t_data elem;
	
	if(pila == NULL) printf("La pila es null\n");
	else printf("La pila no es null\n");
	
	apilar(&pila,'r');
	apilar(&pila,'t');
	apilar(&pila,'f');
	apilar(&pila,'d');
	apilar(&pila,'x');
	
	//printf("El elemento de la pila es : %c \n", (*pila).data);
	printf("El elemento del tope de la pila es : %c \n", pila->data);
	
	desapilar(&pila,&elem);
	printf("El elemento desapilado es %c\n", elem);
	desapilar(&pila,&elem);
	printf("El elemento desapilado es %c\n", elem);
}
