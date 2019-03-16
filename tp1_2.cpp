#include <stdio.h>

int cuadrado (int x);
void cuadrado_void (int *x);
void invertir (int *a, int *b);
void ordenar (int *a, int *b);

int main () {

	int varA, varB;
	puts("Ingrese una variable A numerica:");
	scanf("%d", &varA);
	
	printf("\nDireccion de la variable A: %p\n", &varA);
	printf("Contenido de la variable A: %d\n", varA);

	puts("\nIngrese una variable B numerica:");
	scanf("%d", &varB);

	printf("\nDireccion de la variable B: %p\n", &varB);
	printf("Contenido de la variable B: %d\n", varB);

	invertir(&varA,&varB);

	puts("\nVariables invertidas:");
	printf("Variable A: %d\n", varA);
	printf("Variable B: %d\n", varB);


	ordenar (&varA, &varB);
	puts("\nVariables en orden ascendente:");
	printf("Variable A: %d\n", varA);
	printf("Variable B: %d\n", varB);


	varA = cuadrado(varA);
	cuadrado_void(&varB);

	printf("\nVariable A al cuadrado: %d\n", varA);
	printf("Variable B al cuadrado: %d\n", varB);

	puts("FIN");


}

int cuadrado (int x) {
	return (x*x);
}

void cuadrado_void (int *x) {
	*x *= (*x);
	return;
}

void invertir (int *a, int *b) {

	*a = *a + *b;
	*b = *a - *b;
	*a = *a - *b;

	return;
}

void ordenar (int *a, int *b) {
	if (*a > *b) {
		invertir(a, b);
	}

	return;
}