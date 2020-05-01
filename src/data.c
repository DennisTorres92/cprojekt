#include "define.h"
#include "data.h"
#include <sys/types.h>
#include <unistd.h>

void Init(){
	entry = 0;
	addressbook = malloc(1 * sizeof(data));
	Loaddata();
}
void Loaddata(){
	FILE* file;
	file = fopen("data", "rb");
	if(file == NULL){
		file = fopen("data", "wb");
		assert(file);
		puts("Create data file.\n");
	}else{
		char* line = NULL;
		size_t len = 0;
		ssize_t read;
	/*	while ((read = getline(&line, &len, file) != -1)) {
			addressbook = realloc(addressbook, (entry + 1) * sizeof(data));
			//save to addressbook
			//addressbook[entry].id = entry;
			//addressbook[entry].firstname = 
			//addressbook[entry].lastname =
			entry++;
		} */
	}
	fclose(file);
}
void Savedata(){
	FILE* file;
	file = fopen("data", "wb");
	assert(file);
	puts("Save data...");
	for(int i = 0; i > entry; i++){
		char buffer[MAXLEN];
		fputs(	
	}
	fclose(file);
}

int8 Menu(){
	puts("Addressbook: \n1 - new Data\n2 - edit Data\n3 - show Data\n4 - exit\ninput: ");
	int inp;
	scanf(" %d", &inp);
	while (inp != '\n' && getchar() != '\n');
	switch(inp){
		case 1:
			Newdata();
			return 1;
			break;
		case 2:
			Editdata();
			return 2;
			break;
		case 3:
			Showdata();
			return 3;
			break;
		case 4:
			return 0;
			break;
		default:
			puts("Please use 1-4\n");
			return -1;
			break;
	}
	return -1;
}
void Newdata(){
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
	Input(x);
	entry++;
}
void Editdata(){
	int8 id = Showdata();
	if(id != - 1){
		Input(id);
	}
}
int16 Showdata(){
	int8 i = 0;
	while(i < entry){
		Printdata(&addressbook[i]);
		//return i;
		i++;
	}
	puts("addressbook is clean.\n");
	return -1;
}
void Input(size_t id){
	fputs("name: ", stdout);
	fgets(addressbook[id].firstname, sizeof(addressbook[id].firstname), stdin);
	Ternl(addressbook[id].firstname);
	fputs("lastname: ", stdout);
	fgets(addressbook[id].lastname, sizeof(addressbook[id].lastname), stdin);
	Ternl(addressbook[id].lastname);
	puts("[Save] ");
	Printdata(&addressbook[id]);
}
void Printdata(struct data* data){
	char* str;
	strcpy(str, "DbID: ");
	char* id;
	strcat(str, (char*)data->id);
	strcat(str, " ");
	strcat(str, data->lastname);
	strcat(str, ", ");
	strcat(str, data->firstname);
	puts(str);
}

