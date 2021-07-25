Algoritmo calficiaciones
	Dimension calificaciones[5]
	contador <- 1
	Repetir
		Escribir "Ingresa tu calificación: "
		Leer calificaciones[contador]
		contador <- contador + 1
	Hasta Que contador == 6
	contador <- 1
	suma <- 0
	Mientras contador <= 5 Hacer
		suma <- suma + calificaciones[contador]
		contador <- contador + 1
	Fin Mientras
	promedio <- suma / 5
	Escribir "El promedio general del grupo es: " Sin Saltar
	Escribir promedio
FinAlgoritmo
