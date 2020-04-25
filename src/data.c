#include "data.h"
bool menu(){
	printf("Adressbook: \n
		1 - new Data\n
		2 - edit Data\n
		3 - show Data\n
		4 - exit\n
		input: ");
	int8 inp;
	scanf("%i", &inp);
	switch(inp){
		case 1:
			adressbook::newdata();
			return true;
			break;
		case 2:
			editdata();
			return true;
			break;
		case 3:
			showdata();
			return true;
			break;
		case 4:
			return false;
			break;
		case default:
			printf("Please use 1-4");
			return true;
			break;
	}
}

