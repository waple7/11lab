#include<math.h>
#include "rhomb1.h"

float Rhomb_square(struct rhomb coordinate) {
	float BD, AC;
	AC = sqrt(pow((coordinate.y1 - coordinate.w1), 2) + pow((coordinate.y2 - coordinate.w2) , 2));
	BD = sqrt(pow((coordinate.x1 - coordinate.z1), 2) + pow((coordinate.x2 - coordinate.z2) , 2));
	
	return  0.5 * AC * BD;
}

float Rhomb_perimeter(struct rhomb coordinate) {
	float AB, BC, CD, DA;
	BC = sqrt(pow((coordinate.y1 - coordinate.z1), 2) + pow((coordinate.y2 - coordinate.z2) , 2));
	AB = sqrt(pow((coordinate.x1 - coordinate.y1), 2) + pow((coordinate.x2 - coordinate.y2) , 2));
	DA = sqrt(pow((coordinate.w1 - coordinate.x1), 2) + pow((coordinate.w2 - coordinate.x2) , 2));
	CD = sqrt(pow((coordinate.z1 - coordinate.w1), 2) + pow((coordinate.z2 - coordinate.w2) , 2));
	
	return BC + AB + DA + CD;
}

