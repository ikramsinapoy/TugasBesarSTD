// Parent as Single Linked List and Kaset

#ifndef LIST_PARENT_H_INCLUDED
#define LIST_PARENT_H_INCLUDED
#include <iostream>
#define first_parent(L) L.first_parent
#define next_parent(P) P->next_parent
#define info_parent(P) P->info_parent

using namespace std;

typedef int infotype_parent;
typedef struct elmlist_parent *address_parent;

struct elmlist_parent {
    infotype_parent info;
    address_parent next;
};

struct List_parent {
    address_parent first;
};


void createList(List_parent &L);
void insertFirst(List_parent &L, address_parent P);
void insertAfter(List_parent &L, address_parent Prec, address_parent P);
void insertLast(List_parent &L, address_parent P);
void deleteFirst(List_parent &L, address_parent &P);
void deleteLast(List_parent &L, address_parent &P);
void deleteAfter(List_parent &L, address_parent Prec, address_parent &P);

address_parent alokasi(infotype_parent x);
void dealokasi(address_parent &P);
address_parent findElm(List_parent L, infotype_parent x);
void printInfo(List_parent L);
#endif // LIST_PARENT_H_INCLUDED
