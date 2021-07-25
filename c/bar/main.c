#include <stdio.h>

int main(){
	int edad;
	printf("Ingresa tu edad: ");
	scanf("%d", &edad);
	if(edad >= 18){
		printf("Bienvenido al bar");
	}else{
		printf("Lo sentimos, no tienes edad");
	}
	return 0;
}
