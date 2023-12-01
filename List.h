#pragma once
#ifndef _LIST_H
#define _LIST_H
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

struct Data {
	int c = 0;
	int e = 0;
};

struct LE {
	Data data;
	LE* next = NULL;
};

struct List {
	LE* head = NULL;
};

void Show_List(List& list);
void Push(List& list, Data data);
bool Is_Empty(List& list);
void Clear(List& list);
void Derivative(List& list);

#endif
