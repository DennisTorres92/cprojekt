#include "define.h"
#include "data.h"
void init(){
	entry = 0;
	addressbook = malloc(1 * sizeof(data));
}
int8 menu(){
	printf("Adressbook: \n1 - new Data\n2 - edit Data\n3 - show Data\n4 - exit\ninput: ");
	int inp;
	scanf(" %d", &inp);
	while (inp != '\n' && getchar() != '\n');
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
		if(&addressbook[i] == NULL){
			x = i;
			break;
		}else if(i == entry){
			addressbook = realloc(addressbook, (entry + 1) * sizeof(data));
			x = entry;
			break;
		}
	}
	addressbook[x].id = x;
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
		printdata(&addressbook[i]);
		//return i;
		i++;
	}
	printf("addressbook is clean.\n");
	return -1;
}
void input(size_t id){
	fputs("name: ", stdout);
	fgets(addressbook[id].firstname, sizeof(addressbook[id].firstname), stdin);
	ternl(addressbook[id].firstname);
	fputs("lastname: ", stdout);
	fgets(addressbook[id].lastname, sizeof(addressbook[id].lastname), stdin);
	ternl(addressbook[id].lastname);
	printf("[Save] ");
	printdata(&addressbook[id]);
}
void printdata(struct data* data){
		printf("DbID: %i %s, %s\n", data->id, data->lastname, data->firstname);
}
