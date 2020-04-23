#include "define.h"

int main(int argv, const char** argc){
	printf("Hello World!\n");
	test vec;
	vec.x = 1;
	vec.y = 2;
	vec.z = 3;
	printvec(&vec);
	return 0;
}
