#include <stdio.h>
#include <stdlib.h>
#include "List.h"

int main() {
	system("chcp 1251");
	List list;
	Data data;
	int key;
	//int n;
	bool flag = true;
	while (flag) {
		do {
			printf("1 - инициализация многочлена \n\
2 - вычисление произвоной многочлена \n\
3 - очистка многочлена \n");
			scanf_s("%i", &key);
		} while (key < 1 or key > 2);
		switch (key) {
		case 1:
			/*do {
				printf("Введите номер элемента многочлена: ");
				scanf_s("%d", &n);
			}while(n<=0);*/
			printf("Введите коэффициент перед х: ");
			scanf_s("%d", &data.c);
			do {
				printf("Введите степень: ");
				scanf_s("%d", &data.e);
			} while (data.e <= 0);
			Push(list, data);
			break;
		case 2:
			Derivative(list);
			break;
		case 3:
			Clear(list);
			break;
		}
		Show_List(list);
		printf("\n");
	}
}
