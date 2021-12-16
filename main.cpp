#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include"rhomb1.h"

int main() {
	
	struct rhomb arg = { 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0 };
	scanf(" %f",&arg.x1);scanf(" %f",&arg.x2);
	scanf(" %f",&arg.y1);scanf(" %f",&arg.y2);
	scanf(" %f",&arg.z1);scanf(" %f",&arg.z2);
	scanf(" %f",&arg.w1);scanf(" %f",&arg.w2);
	
	
	float perimeter = Rhomb_perimeter(arg);
	float square = Rhomb_square(arg);
	printf("perimeter = %f\n", perimeter);
	printf("square = %f", square);
	
	return 0;
}
