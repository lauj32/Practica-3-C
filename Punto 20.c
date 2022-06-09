
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main(int argc , char **argv){

	if(argc == 4){
	
		int FIRST, LAST, INCREMENT;
		
		INCREMENT = atoi(argv[1]);
		
		FIRST = atoi(argv[2]);
		LAST = atoi(argv[3]);
		
		if(INCREMENT == 0) exit(1);
		
		//Si INCREMENT es mayor a 0...
		else if(INCREMENT > 0){
			int numAct;
			
			if(FIRST < LAST) for(numAct = FIRST ; numAct <= LAST ; numAct+=INCREMENT) printf("%d\n",numAct);
			
			
			else if(FIRST > LAST) for(numAct = FIRST ; numAct >= LAST ; numAct-=INCREMENT) printf("%d\n",numAct);
	 		
	 	
		}
		//SI INCREMENT es menor a 0...
		else if(INCREMENT < 0) {
			int numAct;
			
			if(FIRST < LAST) for(numAct = FIRST ; numAct >= LAST ; numAct+=INCREMENT) printf("%d\n",numAct);
	 		
	 	}
		
		
	}
	
	//Si no se ingresaron 4 argumentos...
	else exit(1);

}
