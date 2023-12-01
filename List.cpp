#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
#include "List.h"

void Show_List(List& list){
	if (!Is_Empty(list)) {
		for (LE* l = list.head; l != NULL; l = l->next) {
			printf("%dx^", l->data.c);
				printf("%d", l->data.e);
			

			if (l->next != nullptr)
				if (l->next->data.c > 0)
					printf("+");
		}
		printf("\n");
	}
}

void Push(List& list, Data data){
	LE* l = (LE*)malloc(sizeof(LE));
	l->next = NULL;
	l->data = data;
	if (list.head == NULL)
		list.head = l;
	else if (list.head->data.e < l->data.e)
	{
		l->next = list.head;
		list.head = l;
	}
	else{
		LE* cur = list.head;
		for (;cur->next != NULL; cur = cur->next)
			if (cur->next->data.e < l->data.e)
			{
				l->next = cur->next;
				cur->next = l;
				break;
			}
		if (cur->next == NULL)
			cur->next = l;
		/*if (cur  == list.head){
			l->next = list.head;
			list.head = l;
		}
		else{
			if (cur->next != NULL)
				l->next = cur->next;
			cur->next = l;
		}*/
	}
}

void Derivative(List& list) {
	for (LE* l = list.head; l != NULL; l = l->next) {
		l->data.c *= l->data.e;
		l->data.e--;
	}
}

bool Is_Empty(List& list){
	return list.head == NULL;
}

void Clear(List& list){
	while (not Is_Empty(list)){
		LE* cur = list.head;
		list.head = list.head->next;
		free(cur);
	}list.head = 0;
}