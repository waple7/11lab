#include<math.h>
#include "rhomb.h"

float square1(struct rhomb coord) {
	float BD, AC;
	BD = sqrt(pow((coord.x1 - coord.z1) / 2, 2) + pow((coord.x2 - coord.z2) / 2, 2));
	AC = sqrt(pow((coord.y1 - coord.w1) / 2, 2) + pow((coord.y2 - coord.w2) / 2, 2));
	return  0.5 *(AC + BD);
}
float perimeter1(struct rhomb coord) {
	float AB, BC, CD, DA;
	AB = sqrt(pow((coord.x1 - coord.y1) / 2, 2) + pow((coord.x2 - coord.y2) / 2, 2));
	return AB*4;
}

struct rhomb create_struct(struct rhomb coord) {
	coord.x1 = 1;
	coord.x2 = 6;
	coord.y1 = 4;
	coord.y2 = 10;
	coord.z1 = 7;
	coord.z2 = 6;
	coord.w1 = 4;
	coord.w2 = 2;
	return coord;
}