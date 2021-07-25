#include <stdio.h>

int main(){
	int edad;
	printf("Ingresa tu edad: ");
	scanf("%d", &edad);
	if(edad >= 18 && edad < 30){
		printf("Bienvenido al bar");
	}else if(edad >= 30){
		printf("Puedes entrar solo de 9 a 9");
	}else{
		printf("Lo sentimos, no puedes entrar");
	}
	return 0;
}
