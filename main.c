#include "define.h"

int main(int argv, const char** argc){
	printf("Please type a position(x y z): ");
	test vec;
	scanf("%i %i %i", &vec.x, &vec.y, &vec.z);
	printvec(&vec);
	return 0;}
