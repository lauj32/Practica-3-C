#include "pila.h"
#include <stdlib.h>


void crear_pila(ptr_node *p){ 

	*p = NULL;

}

void destruir_pila(ptr_node *p){ 

	free(*p);

}

//  p es un puntero a un puntero a node . Tambien puede pensarse como la direccion que contiene al puntero a node
//  p es el puntero a el puntero a node
// *p es el puntero a node
//**p es el node
void apilar(ptr_node * p , t_data elem){ 

	struct t_node * new = malloc( sizeof(struct t_node) ); //new es un puntero a t_node
	
	//new es el puntero a t_node
	//(*new) es t_node / la estructura
	
	//Puedo referenciar a los elementos de *new con new->data y new->node
	
	(*new).data = elem;
	(*new).node = *p;
	
	*p = new;
	
}

void desapilar(ptr_node *p , t_data * elem){

	if( (*p) != NULL ){
		*elem = (*p)->data;
		
		*p = (*p)->node;
		
	
	}
	
	
}
