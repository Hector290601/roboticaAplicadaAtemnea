#include <stdio.h>

int main(){
	/*
	printf("\033[1;30;31m Hola Colores\n");
	printf("\033[4;32;46m Hola Omar\n");
	printf("\033[5;33;44m Hola Colores\n");
	printf("\033[0;37;40m");
	*/
	for(int i = 0; i <= 7; i++){	//estilo
		for(int j = 30; j <= 37; j++){	//colorTexto
			for(int k = 40; k <= 47; k++){		//colorFondo
				printf("\033[%d;%d;%dm %d-%d-%d\n", i, j, k, i, j, k);
			}
		}
	}
	printf("\033[0;37;40m");
	return 0;
}
