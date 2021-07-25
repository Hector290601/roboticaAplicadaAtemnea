#include <stdio.h>

int main(){
	int califiaciones[5];
	int cal = 0;
	int suma = 0;
	for(int i = 0; i <= 4; i++){
		printf("Dame tu calificacióon:\n");
		scanf("%d", &cal);
		califiaciones[i] = cal;
		suma += cal;
	}
	printf("%d\n", suma);
	float promedio = ((float)suma)/((float)5);
	printf("El promedio general es de: %f\n", promedio);
	return 0;
}
