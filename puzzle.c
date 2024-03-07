#include <stdio.h>
#define flecha_arr 72 // FLECHA ARRIBA
#define flecha_aba 80 // FLECHA ABAJO
#define flecha_der 77 // FLECHA DERECHA
#define flecha_izq 75 // FLECHA IZQUIERDA
#define esc 27 // ESC SALIDA
int posI = 3, posJ = 1, temp = 0;
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
void moverIzquierda() {
	if(posJ - 1 >= 0) {
		temp = puzzle[posI][posJ-1];
		puzzle[posI][posJ-1] = puzzle[posI][posJ];
		puzzle[posI][posJ] = temp;
		posJ -= 1;
		temp = 0;
	}
}
int main() {
	char flecha;
	int i = 0, j = 0;
	imprimirArreglo();
	while(1) {
		flecha = getch();
		switch(flecha) {
			case flecha_arr:
				printf("ARRIBA");
				imprimirArreglo();
				break;
			case flecha_aba:
				printf("ABAJO");
				imprimirArreglo();
				break;
			case flecha_der:
				imprimirArreglo();
				break;
			case flecha_izq:
				moverIzquierda();
				imprimirArreglo();
				break;
			case esc:
				return 0;
				break;
		}
	}
}
