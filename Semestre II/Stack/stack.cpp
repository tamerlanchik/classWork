// stack.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"
#include <stdio.h>
#include <conio.h>
#include <malloc.h>
#include <locale.h>
struct list
{
	int data;
	list* next;
};
list* push(list*,int);
list* pop(list*);
void outAll(list*);
list* insert(list*,int);
list* search(list*, int);
list* remove(list*, int);
void sort1(list*);
void sort2(list*);

int main()
{
	setlocale(LC_ALL, "Rus");
	list* first;
	char ch;
	int data;
	first = NULL;
	do{
		printf("\n1 - Добавить\n");
		printf("2 - Извлечь\n");
		printf("3 - Вывести всё\n");
		printf("4 - Вставить\n");
		printf("5 - Удалить\n");
		printf("6 - Сортировать\n");
		//printf("7 - Сортировать-2\n");
		printf("0 - Выход\n");
		fflush(stdin);
		printf("\n");
		ch = getch();

		switch(ch)
		{
		case '1':
			printf("Введите целое число: ");
			scanf("%d", &data);
			first = push(first, data);
			break;
		case '2':
			first = pop(first);
			break;
		case '3':
			outAll(first);
			break;
		case '4':
			printf("Введите целое число: ");
			scanf("%d", &data);
			first = insert(first, data);
			break;
		case '5':
			if(!first)
				printf("Стек пуст!\n");
			else{
				printf("Введите удаляемое число: ");
				scanf("%d", &data);
				first = remove(first, data);
			}
			break;
		case '6':
			sort1(first);
			break;
		/*case '7':
			sort2(first);
			break;*/
		default:
			break;
		}

	}while(ch!='0');
	return 0;
}

list* push(list* first, int data)
{
	list* p = (list*)malloc(sizeof(list));
	p->data = data;
	p->next = first;
	return p;
}
list* pop(list* f){
	if(f==NULL)
	{
		printf("Стек пуст!\n");
	}
	else{
		printf("%d\n", f->data);
		f = f->next;
	}
	return f;
}
void outAll(list* f)
{
	if(f == NULL){
		printf("Стек пуст!\n");
	}
	else{
		while(f!=NULL)
		{
			printf("%d\n", f->data);
			f = f->next;
		}
	}
}
list* insert(list* f, int data)
{
	list* p = search(f, data);
	list* temp = (list*)malloc(sizeof(list));
	temp->data = data;
	if(p!=NULL)
	{
		temp->next = p->next;
		p->next = temp;
	}
	else
	{
		temp->next = f;
		f=temp;
	}
	return f;
}
list* search(list* f, int data) {
	if(f==NULL)
		return NULL;
	if(f->data > data)
		return NULL;
	while(f->next!=NULL && f->next->data < data)
		f = f->next;
	return f;
}
list* remove(list* f, int data){
    if(!f){
        printf("Стек пуст!\n");
        return NULL;
    }
    if(f->data == data)
        f = f->next;
    else{
        list* p = search(f, data);
        if(p!=NULL){
            if(p->next == NULL)
            {
                //когда в стеке один элемент
                if(p->data != data)
                    printf("Нет такого элемента!\n");
                else
                    f = NULL;
            }
            else if(p->next->data != data)
            {
                printf("Нет такого элемента!\n");
            }
            else{
                p->next = p->next->next;
            }
        }
        else
            printf("Нет такого элемента!\n");
    }
	//TODO: проверить работу на границах стека. В середине работает. В конце предварительно тоже.
	return f;
}
void sort1(list* f)
{
	if(!f){
		printf("Стек пуст!\n");
		return;
	}
	
	int temp_data, flag;
	list *temp_s, *ff;

	flag=1;
	while(flag){
		flag=0;
		temp_s = ff = f;
		while(ff->next){
			ff = ff->next;
			if(ff->data < temp_s->data)
			{
				flag=1;
				temp_data = temp_s->data;
				temp_s->data = ff->data;
				ff->data = temp_data;
			}
			temp_s=ff;
		}
	}
	printf("Стек отсортирован!\n");
}

void sort2(list* f)
{
	if(!f){
		printf("Стек пуст!\n");
		return;
	}

	list* p;
	int v,k;

	k=1;
	while(k!=0)
	{
		k=0;
		p = f;
		while(p->next)
		{
			if(p->data > p->next->data)
			{
				v = p->data;
				p->data = p->next->data;
				p->next->data = v;

				k=1;
			}
			p = p->next;
		}
	}
	printf("Стек отсортирован!\n");
}
