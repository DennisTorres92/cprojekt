#include "define.h"

int main(int argv, const char** argc){
	test vec;
	scanf("%i %i %i", &vec.x, &vec.y, &vec.z);
	printvec(&vec);
	return 0;
}
