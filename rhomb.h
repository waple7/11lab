#ifndef RHOMB
#define RHOMB

struct rhomb {
	float x1, x2, y1, y2, z1, z2, w1, w2;
};

struct rhomb create_struct(struct rhomb value);
float square1(struct rhomb value);
float perimeter1(struct rhomb value);
#endif // RHOMB