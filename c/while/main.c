#include <stdio.h>

int main(){
	int opc = 0;
	int cal = 0;
	int suma = 0;
	int alm = 0;
	do{
		printf("Ingresa la califciacion: \n");
		scanf("%d", &cal);
		alm += 1;
		suma += cal;
		printf("Quieres ingresar otra calificacion?: \n\t1)Si\n\t0)No\n");
		scanf("%d", &opc);
	}while(opc == 1);
	float promedio = (float)((float)suma/(float)alm);
	printf("Ingresaste %d caldificaciones, el promedio es: %f\n", alm, promedio);
	return 0;
}
