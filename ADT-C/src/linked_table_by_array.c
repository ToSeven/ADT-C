/*
 * linked_table_by_array.c
 *
 *  Created on: 2016Äê6ÔÂ3ÈÕ
 *      Author: heng
 */
#include "linked_table_by_array.h"
#include "stdlib.h"

/* create a empty linked table by array*/
list_arry * createListArry()
{
	list_arry *Ptrl=(list_arry *)malloc(sizeof(list_arry));
	if(Ptrl){
		Ptrl->last=-1;
		return Ptrl;
	}
}

/*find a element on linked table*/
int findListArry(list_arry *Ptrl,ElementType x)
{
	int i=0;
	while(Ptrl->last>=i)
	{
		if(Ptrl->data[i]==x)
			return x;
		i++;
	}
	return -1;
}

/* insert a num in linked table by array*/
void insertListArry(list_arry *Ptrl,ElementType x,int position)
{
	if(Ptrl->last=arry_size-1)
		printf("list is over\n");
	if(position<0&&position>Ptrl->last+2)
		printf("position is error\n");
	for(int i=Ptrl->last;i>=position;i--)
		Ptrl->data[i+1]=Ptrl->data[i];
	Ptrl->data[position]=x;
	Ptrl->last++;
}

/*delete a num in linked table by array*/
void deleteListArray(list_arry *Ptrl,int position)
{
	if(position<0&&position>Ptrl->last+1)
		printf("position is error\n");
	Ptrl->data[position]=0;
	for(int i=position;i<Ptrl->last;i++)
		Ptrl->data[i]=Ptrl->data[i+1];
	Ptrl->last--;

}
