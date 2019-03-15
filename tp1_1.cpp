#include <stdio.h>

int main () {

	int var, *punt1;

	var = 10;
	punt1 = &var;


	printf("Valor de la variable: %d\n", var);
	printf("Contenido del puntero: %d\n", *punt1);
	printf("Direccion almacenada por el puntero: %p\n", punt1);
	printf("Direccion de memoria de la variable: %p\n", &var);
	printf("Direccion de memoria del puntero: %p\n", &punt1);
	printf("Tamanio de memoria utilizado por la variable: %d bytes\n", sizeof(var));
	
	puts("FIN");
	return 0;
}