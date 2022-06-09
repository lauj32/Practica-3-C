#include "punto25.h"
#include <stdlib.h>
#include <stdio.h>

void list_increment(int **ptr_list , int *size){

	// ¿Por que se recibe **ptr_list ?
	/* Esto se hace porque para realizar la asignacion
	*  *ptr_list = new estoy modificando el puntero a int al que apunta ptr_list
	*  
	*  Si solo recibiera *ptr_list estoy recibiendo una copia de un puntero a int
	*  pero al realizar la asignacion y salir de la funcion, dicha asignacion
	*  no se ve reflejada en el puntero de fuera de la funcion
	*
	*/

	// ptr_list es un puntero al puntero a int
	// *ptr_list es un puntero a int
	// **ptr es un int

	//¿Por que es necesario list?

	int *new = malloc( sizeof(int) * ++(*size) ) , *list = *ptr_list , i ;
	
	for(i = 0; i < *size ; i++) new[i] = list[i];
	
	 liberar(&list);
	*ptr_list = new;
	
}

void list_reduce(int **ptr_list , int *size){

	if(*size > 0){

		int *new = malloc( sizeof(int) * --(*size) ) , *list = *ptr_list , i;
		
		for(i = 0; i < *size ; i++) new[i] = list[i];
		
		liberar(&list);
		
		*ptr_list = new;
	}
	
}


int main(){
	
	int size = 0;
	int * list = NULL;
	
	int cant = 0;
	
	for(int i = 0; i < size ; i++) cant++;
	
	printf("list se acaba de crear y tiene %d espacios alocados\n", cant); 
	
	size = 5;
	
	list = crear_vector_int(size);
	
	cant = 0;
	
	for(int i = 0; i < size ; i++) cant++;
	
	printf("list luego de inicializarse tiene %d espacios alocados\n", cant); 
	
	list_increment(&list,&size);
	list_increment(&list,&size);
	list_increment(&list,&size); // 8
	
	cant = 0;
	
	for(int i = 0; i < size ; i++) cant++;
	
	printf("list ahora tiene %d espacios alocados\n", cant); 
	
	list_reduce(&list,&size);
	
	cant = 0;
	
	for(int i = 0; i < size ; i++) cant++;
	
	printf("list ahora tiene %d espacios alocados\n", cant); 
	
	


}


