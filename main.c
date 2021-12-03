#define _CRT_SUCURE_NO_WARNINGS
#include<stdio.h>
#include"rhomb.h"

int main() {
	struct rhomb value = { 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0 };
	value = create_struct(value);
	float perimeter = perimeter1(value);
	float square = square1(value);
	printf("square = %f\n", square);
	printf("perimiter = %f", perimeter);
	return 0;
}