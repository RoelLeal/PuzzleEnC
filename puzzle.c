#include <stdio.h>
#include <conio.h>
#define flecha_arr 72
#define flecha_aba 80
#define flecha_der 77
#define flecha_izq 75
int main() {
	char flecha;
	int i = 0, j = 0, puzzle[4][4] = 
	{
		{1, 5, 4, 8},
		{9, 6, 3, 2}, 
		{7, 10, 14, 13},
		{12, 0, 15, 11},
	};
	
	while(1) {
		flecha = getch();
		switch(flecha) {
			case flecha_arr:
				printf("ARRIBA");
				break;
			case flecha_aba:
				printf("ABAJO");
				break;
			case flecha_der:
				printf("DERECHA");
				break;
			case flecha_izq:
				printf("IZQUIERDA");
				break;
		}
	}
	for(i = 0; i < 4; i++) {
		for(j = 0; j < 4; j++) {
			printf("%i ", puzzle[i][j]);
		}
		printf("\n");
	}
	
	return 0;
}
