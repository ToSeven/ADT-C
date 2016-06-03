/*
 * linked_table_by_array.h
 *
 *  Created on: 2016Äê6ÔÂ3ÈÕ
 *      Author: heng
 *  describe: linked table by array
 */

#ifndef LINKED_TABLE_BY_ARRAY_H_
#define LINKED_TABLE_BY_ARRAY_H_

#define arry_size 100
#define ElementType int

typedef struct{
	ElementType data[arry_size];
	ElementType *last;
}list_arry;

//list_arry list_now,*Ptrl;

list_arry * createListArry();
int findListArry(list_arry *Ptrl,ElementType x);
void insertListArry(list_arry *Ptrl,ElementType x,int position);
void deleteListArray(list_arry *Ptrl,int position);

#endif /* LINKED_TABLE_BY_ARRAY_H_ */
