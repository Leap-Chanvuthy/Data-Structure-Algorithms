#include <iostream>
using namespace std;

struct Element {
    int data;
    Element * next;
};

struct List {
    int size;
    Element * head, *tail;
};

List * createEmptyList() {
    List *ls;
    ls = new List();
    ls->size = 0;
    ls-> head = NULL;
    ls-> tail = NULL;
}

void insertBegin(List *ls, int newData){
    Element * e;
    e = new Element();
    e->data = newData;

    e->next = ls->head;
    ls->head = e;
    if(ls->size == 0){
        ls->tail = e;
    }
    ls->size++;
}

void insertEnd(List *ls, int newData){
    Element * e;
    if(ls->size == 0){
        insertBegin(ls, newData);
    }else{
        e = new Element();
        e->data = newData;
        e->next = NULL;

        ls->tail->next = e;
        ls->tail = e;
        ls->size++;
    }
}

void displayData(List *ls){
    Element *tmp;
    tmp = ls->head;
    while (tmp != NULL)
    {
        cout<<" "<<tmp->data<<endl;
        tmp = tmp->next;
    }
}

void deleteBegin(List *ls){
    Element *tmp;
    tmp = ls->head;
    ls->head = ls->head->next;

    delete tmp;
    if(ls->size == 1) ls->tail = NULL;
    ls->size--;
}

void deleteLast(List *ls){
    Element * tmp;
    int i;
    if(ls->size == 1){
        deleteBegin(ls);
    }
    else{
        tmp = ls->head;
        for ( i = 1; i <= ls->size - 2; i++)
        {
            tmp = tmp->next;
        }
        ls->tail = tmp;
        tmp = tmp->next;
        ls->tail->next = NULL;
        delete(tmp);
        ls->size--;
    }
}

void deleteAll(List *ls){
    if(ls->size <= 0) {
        cout<<"There is nothing to delete"<<endl;
    }
    while(ls->size > 0){
        deleteBegin(ls);
    }
}

int main () {

    List * myList;
    myList = createEmptyList();

    cout<<"Insert to the end of the list"<<endl;
    insertBegin(myList, 1000);
    insertBegin(myList, 1001);
    insertBegin(myList, 1002);
    insertBegin(myList, 1000);
    insertBegin(myList, 1001);
    insertBegin(myList, 1002);
    displayData(myList);

    cout<<"Insert to the end of the list"<<endl;
    insertEnd(myList, 10);
    insertEnd(myList, 101);
    insertEnd(myList, 102);
    insertEnd(myList, 103);
    insertEnd(myList, 104);
    displayData(myList);

    cout<<"Delete from begin"<<endl;
    deleteBegin(myList);
    displayData(myList);

    cout<<"Delete from last"<<endl;
    deleteLast(myList);
    displayData(myList);

    cout<<"Delete All"<<endl;
    deleteAll(myList);
    displayData(myList);

    return 0;
}