#include <stdio.h>
#include <string.h>

struct cd {
	char titulo[25];
	char artista[15];
	float precio;
};

int main() {
	struct cd CD1;
	CD1.precio = 25;

	printf("Precio: %f\n", CD1.precio);
}