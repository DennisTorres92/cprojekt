#ifndef DATA_H
#define DATA_H
void init();
int8 menu();
void newdata();
void editdata();
int16 showdata();
data* addressbook;
void input(size_t i);
void printdata(data* data);
uint16 entry;
#endif	/*   DATA_H   */
