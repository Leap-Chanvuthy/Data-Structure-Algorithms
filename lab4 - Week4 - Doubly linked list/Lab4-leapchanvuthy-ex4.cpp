#include <iostream>
#include <fstream>
using namespace std;

struct Element {
    int data;
    Element *next;
    Element *previous;
};

struct List {
    int size;
    Element * head, *tail;

};

List * createEmptyList(){
    List *ls;
    ls = new List();

    ls->size = 0;
    ls->head = NULL;
    ls->tail = NULL;
}

void insertBegin(List *ls , int newData) {
    Element * e;
    e = new Element();

    e->data = newData;
    e->previous = NULL;
    e->next = ls->head;

    if(ls->size == 0) {
        ls->tail = e;
    }
    if(ls->size != 0){
        ls->head->previous = e;
    }
    ls->head = e;
    ls->size ++;
}

void insertEnd(List *ls , int newData) {
    Element * e;
    if(ls->size == 0){
        insertBegin(ls, newData);
    }else {
        e = new Element();
        e->data = newData;
        e->next = NULL;
        e->previous = ls->tail;

        ls->tail->next = e;
        ls->tail = e;
        ls->size++;
    }
}

void displayFromHead(List *ls){
    Element *tmp;
    tmp = ls->head;
    if(tmp == NULL) cout<<"There is no data"<<endl;
    else cout<<"All data in the list"<<endl;
    while (tmp != NULL)
    {
        
        cout<<" "<<tmp->data<<endl;
        tmp = tmp->next;
    }
    
}

void displayFromTail(List *ls){
    Element *tmp;
    tmp = ls->tail;
    while (tmp != NULL)
    {
        tmp = tmp->previous;
    }
    
}


void deleteBegin(List *ls){
    Element *tmp;
    tmp = ls->head;
    ls->head = ls->head->next;
    // ls->head->previous = NULL;
    // delete tmp;
    if(ls->size >= 2) {
        ls->head->previous = NULL;
    }
   
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
    while(ls->size > 0){
        deleteBegin(ls);
    }
}

void search(List *ls, int newData){
    Element *tmp;
    int counter = 0;

    tmp = ls -> head;
    while (tmp != NULL)
    {
        if(tmp -> data == newData ) counter++;
        tmp = tmp -> next;
    }
    if(counter == 0) {
        cout<<"\n\tNo data found"<<endl;
    }else{
        cout<<"\n\tFound data "<<counter<<" times"<<endl;
    }
    cout<<"\n";
}


void saveData(List *ls){
    fstream f1;
    f1.open("Ex4-PhatPanhareach.txt", ios::out);
    Element *tmp;
    tmp = ls->head;
    while (tmp != NULL)
    {
        f1<<"Number: "<<tmp->data<<endl;
        tmp = tmp->next;
    }
    f1.close();
}

int main() {

    List * ls;
    ls = createEmptyList();
    int choice, number;
    while (choice != 7)
    {
        cout<<"1. Add a number entered by a user to the end of the list"<<endl;
        cout<<"2. Add a number entered by a user to the beginning of the list"<<endl;
        cout<<"3. Delete the number at the beginning of the list"<<endl;
        cout<<"4. Delete the number at the end of the list"<<endl;
        cout<<"5. Search a number in the list. Display how many times in appear in the list"<<endl;
        cout<<"6. Display All"<<endl;
        cout<<"7. Exit"<<endl;
        cout<<"Choice: "; cin>>choice;

        switch(choice){
            case 1:
                cout<<"Enter number: "; cin>>number;
                insertEnd(ls, number);
                saveData(ls);
                break;
            case 2:
                cout<<"Enter number: "; cin>>number;
                insertEnd(ls, number);
                saveData(ls);
                break;
            case 3:
                deleteBegin(ls);
                saveData(ls);
                break;
            case 4:
                deleteLast(ls);
                saveData(ls);
                break;
            case 5:
                int searchNumber;
                cout<<"What number do you want to search for?: "; cin>>searchNumber;
                search(ls, searchNumber);
                break;
            case 6:
                displayFromHead(ls);
                break;
            default:
                cout<<"Thank for using our program."<<endl;
                break;
        }
       
    }
    
    return 0;
}