#ifndef RHOMB1
#define RHOMB1

struct rhomb {
	float x1, x2, y1, y2, z1, z2, w1, w2;
};

float Rhomb_square(struct rhomb arg);
float Rhomb_perimeter(struct rhomb arg);
#endif // RHOMB1
