
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void print_help(char *arg){

	char h[] = {"-h"};

	char *op = malloc( strlen(arg)*sizeof(char) );
	op = strcpy(op,arg);
	if(strcmp(op,h) == 0){

		printf("El programa imprime el resultado de enviar una operación y sus correspondientes\
 parámetros. El resultado será impreso en\
 pantalla. \n\n ");
		printf("Argumentos : \n\
 	-s: suma los siguientes 2 parámetros.\n\
  	-r: resta los siguientes 2 parámetros.\n\
  	-d: divide los siguientes 2 parámetros.\n\
  	-m: multiplica los siguientes 2 parámetros.\n\
  	-i: imprime todos los parámetros recibidos.\n\
  	-h: imprime un texto de ayuda.\n");
  }
}

void print_result(char *arg1 , char *arg2 , char *arg3){
	
	char op1[] = {"-s"};
	char op2[] = {"-r"};
	char op3[] = {"-m"};
	char op4[] = {"-d"};
	
	int num1 = atoi(arg2);
	int num2 = atoi(arg3);
	int res = 0;
	
	char *ope = malloc( strlen(arg1)*sizeof(char) );
	ope = strcpy(ope,arg1);
	
	if(strcmp(ope,op1) == 0){
  	res = num1 + num2;
  	printf("El resultado de la suma es : %d\n",res);
  }
	else if(strcmp(ope,op2) == 0){
	 res = num1 - num2;
	 printf("El resultado de la resta es : %d\n",res);
  }	
	else if(strcmp(ope,op3) == 0){
		res = num1*num2;
		printf("El resultado de la multiplicacion es : %d\n",res);
  }
	else if(strcmp(ope,op4) == 0){
	 res = num1/num2;
	 printf("El resultado de la division es : %d\n",res);
  }	

}

int print_args(char *arg1, char *arg2 , char *arg3 , char *arg4 ){

	char ar4[] = {"-i"};
	
	if((strcmp(arg4,ar4) == 0)){
	
		char op1[] = {"-s"};
		char op2[] = {"-r"};
		char op3[] = {"-m"};
		char op4[] = {"-d"};
		
		if( (strcmp(arg1,op1) == 0) || (strcmp(arg1,op2) == 0) || (strcmp(arg1,op3) == 0) || (strcmp(arg1,op4) == 0) ){
			printf("Los parametros ingresados son : \"%s\" \"%s\" \"%s\" \n", arg1,arg2,arg3);
			return 1;
		}
		
	}
	
	return 0;

}

int main(int argc , char **argv){

	if(argc == 2) {
		print_help(argv[1]);
		return 0;
	}
	
	else if(argc == 4){
		print_result(argv[1],argv[2],argv[3]);
		return 0;
	
	}
	
	else if( argc == 5){
		if((print_args(argv[1],argv[2],argv[3],argv[4])) == 1) {
			print_result(argv[1],argv[2],argv[3]);
			return 0;
		}
		else return 1;
	}
	else {
		fprintf(stderr,"El numero de parametros ingresados no es correcto\n");
		return 1;
	}
	
}
