#ifndef DATA_H
#define DATA_H
void Init();
void Loaddata();
void Savedata();
int8 Menu();
void Newdata();
void Editdata();
int16 Showdata();
data* addressbook;
void Input(size_t i);
void Printdata(data* data);
uint16 entry;
#endif	/*   DATA_H   */ 
