#include <stdio.h>
#define flecha_arr 72 // FLECHA ARRIBA
#define flecha_aba 80 // FLECHA ABAJO
#define flecha_der 77 // FLECHA DERECHA
#define flecha_izq 75 // FLECHA IZQUIERDA
#define esc 27 // ESC SALIDA
int posI = 3, posJ = 1, temp = 0, n = 0;
int puzzle[4][4] = 
	{
		{1, 5, 4, 8},
		{9, 6, 3, 2}, 
		{7, 10, 14, 13},
		{12, 0, 15, 11},
	};
void imprimirArreglo() {
	int i = 0, j = 0;
	system("cls");
	for(i = 0; i < 4; i++) {
		for(j = 0; j < 4; j++) {
			printf("%i ", puzzle[i][j]);
		}
		printf("\n");
	}
}
void moverArriba() {
	if(posI - 1 >= 0) {
		temp = puzzle[posI-1][posJ];
		puzzle[posI-1][posJ] = puzzle[posI][posJ];
		puzzle[posI][posJ] = temp;
		posI -= 1;
		temp = 0;
	}
}
void moverAbajo() {
	if(posI + 1 < 4) {
		temp = puzzle[posI+1][posJ];
		puzzle[posI+1][posJ] = puzzle[posI][posJ];
		puzzle[posI][posJ] = temp;
		posI += 1;
		temp = 0;
	}
}
void moverIzquierda() {
	if(posJ - 1 >= 0) {
		temp = puzzle[posI][posJ-1];
		puzzle[posI][posJ-1] = puzzle[posI][posJ];
		puzzle[posI][posJ] = temp;
		posJ = posJ - 1;
		temp = 0;
	}
}
void moverDerecha() {
	if(posJ + 1 < 4) {
		temp = puzzle[posI][posJ+1];
		puzzle[posI][posJ+1] = puzzle[posI][posJ];
		puzzle[posI][posJ] = temp;
		posJ += 1;
		temp = 0;
	}
}
int main() {
	char flecha;
	int i = 0, j = 0, der = 0, izq = 0, aba = 0, arr = 0;
	imprimirArreglo();
	while(1) {
		printf("Ingrese el numero que desea mover\n");
		scanf("%i", &n);
		der = puzzle[posI][posJ+1];
		izq = puzzle[posI][posJ-1];
		aba = puzzle[posI+1][posJ];
		arr = puzzle[posI-1][posJ];
		if(n == der) {
			moverDerecha();
			imprimirArreglo();
		}else if(n == izq) {
			moverIzquierda();
			imprimirArreglo();
		}else if(n == aba) {
			moverAbajo();
			imprimirArreglo();
		}else if(n == arr) {
			moverArriba();
			imprimirArreglo();
		}else {
			printf("El numero %i no se puede ser seleccionado, elija otro numero\n\n",n);
		}
	}
}
