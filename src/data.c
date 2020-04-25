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
			newdata();
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
void newdata(){
	entry += 1;
	adressbook = realloc(entry*sizeof(data));
	adressbook+entry->id = entry;
	adressbook+entry->name = name;
	adressbook+entry->lastname = lastname;
}
void editdata(){
	int8 id = showdata();
	adressbook+id->name = name;
	adressbook+id->lastname = lastname;
}
int8 showdata(){
	int8 i;
	do{
		printfdata(adressbook+i);
		return i;
		i++;
	}while(i < entry);
}
