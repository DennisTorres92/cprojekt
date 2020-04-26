#include "define.h"
#include "data.h"

int main(int argv, const char** argc){
	init();	
	while(menu() != 0){
	}
	free(addressbook);
	return 0;
}
