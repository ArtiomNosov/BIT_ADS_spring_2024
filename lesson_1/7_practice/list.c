/*Создаём структуру данных односвязный List*/

#include <stdlib.h>
#include <stdio.h>

// Объявить структуру элемент
typedef struct Elem Elem;
typedef struct Elem {
    int value;
    // указатель на след елем
    Elem* ptr;
} Elem;

// Объявить стркутуру список
typedef struct List {
    // указатель на первый элемент
    Elem* start;
} List;

// Функция создания элемента
Elem* create_elem()
{
    Elem* res = (Elem*) calloc(1, sizeof(Elem));
    return res; // указатель на элемент
}

// Функция создания списка
List* create_list()
{
    List* res = (List*) calloc(1, sizeof(List));
    return res; // указатель на элемент
}

void print(List* list)
{
    Elem* cur = list->start;
    for (;cur;cur=cur->ptr) {
        printf("%d ", cur->value);
    }
}

// Функция вставки
void insert_end(List* list, int value)
{
    Elem* cur = list->start;
    Elem* new_elem = create_elem();
    new_elem->value = value;
    if (cur == NULL) {
        list->start = new_elem;
        return;
    }

    for (;cur->ptr;cur=cur->ptr) {
        printf("%d ", cur->value);
    }
    cur->ptr = new_elem;
}

// Функция удаления
void delete_elem(List* list, int value)
{

}

// Функция поиска
int find_elem(List* list, int value)
{
    
}

int main() 
{
    List* mylist = create_list();
    insert_end(mylist, 1);
    print(mylist);
    printf("\n");
    insert_end(mylist, -10);
    print(mylist);
    printf("\n");
    insert_end(mylist, 5);
    print(mylist);
    return 0;
}