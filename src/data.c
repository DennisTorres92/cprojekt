#include "define.h"
#include "data.h"
void init(){
	entry = 0;
	adressbook = malloc(1 * sizeof(data));
}
int8 menu(){
	printf("Adressbook: \n1 - new Data\n2 - edit Data\n3 - show Data\n4 - exit\ninput: ");
	int inp;
	scanf("%d", &inp);
	switch(inp){
		case 1:
			newdata();
			return 1;
			break;
		case 2:
			editdata();
			return 2;
			break;
		case 3:
			showdata();
			return 3;
			break;
		case 4:
			return 0;
			break;
		default:
			printf("Please use 1-4\n");
			return -1;
			break;
	}
	return -1;
}
void newdata(){
	uint16 x;
	for(uint16 i = 0; i <= entry; i++){
		if(&adressbook[i] == NULL){
			x = i;
			break;
		}else if(i == entry){
			adressbook = realloc(adressbook, (entry + 1) * sizeof(data));
			x = entry;
			break;
		}
	}
	adressbook[x].id = x;
	input(x);
	entry++;
}
void editdata(){
	int8 id = showdata();
	if(id != - 1){
		input(id);
	}
}
int16 showdata(){
	int8 i = 0;
	while(i < entry){
		printdata(&adressbook[i]);
		//return i;
		i++;
	}
	printf("adressbook is clean.\n");
	return -1;
}
void input(int16 id){
	printf("name: ");
	char name[20];
	scanf("%s", name);
	adressbook[id].firstname = name;
	printf("lastname: ");
	char lastname[30];
	scanf("%s", lastname);
	adressbook[id].lastname = lastname;
	printf("[Save] ");
	printdata(&adressbook[id]);
}
void printdata(struct data* data){
		printf("DbID: %i %s, %s\n", data->id, data->lastname, data->firstname);
}
