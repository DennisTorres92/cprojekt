#include "define.h"
#include "data.h"

int main(int argv, const char** argc){
	Init();	
	while(Menu() != 0){
	}
	free(addressbook);
	return 0;
}
