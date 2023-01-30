#include <iostream>
#include <time.h>
using namespace std;

struct Element {
    int data;
    Element *next, *previous;
};

struct List {
    Element *head, *tail;
    int size;
};

List * createEmptyList(){
    List * ls;
    ls = new List();
    
    ls->head = NULL;
    ls->tail = NULL;
    ls->size = 0;
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
    if(tmp == NULL) cout<<"\n\tThere is no data"<<endl;
    else cout<<"\n\tAll data in the list"<<endl;
    while (tmp != NULL)
    {
        srand(time(0));
        // Random number
        for(int i = 0; i < 20; i++)
            cout<<"\n\tNumber: "<<  rand() % 10 + 1 <<endl;
        cout<<"\n\tNumber: "<<tmp->data<<endl;
        tmp = tmp->next;
    }
}


void displayFromTail(List *ls){
    Element *tmp;
    tmp = ls->tail;
    if(tmp == NULL) cout<<"\n\tThere is no data"<<endl;
    else cout<<"\n\tAll data in the list"<<endl;
    while (tmp != NULL)
    {
        srand(time(0));
        // Random number
        for(int i = 0; i < 20; i++)
            cout<<"\n\tNumber: "<<  rand() % 10 + 1 <<endl;
        cout<<"\n\tNumber: "<<tmp->data<<endl;
        tmp = tmp->previous;
    }   
}

float findMax(List *ls){
    float max = -9999999999; //make assumption
    Element *t;
    t = ls->head;
    while (t != NULL)
    {
        if(t->data > max) {
            max = t->data;
        }
        t = t->next;
    }
    return max;
}

float findMin(List *ls) {
    float min = 9999999999;
    Element *t;
    t = ls->head;
    while (t != NULL)
    {
        if(t->data < min){
            min = t->data;
        }
        t = t->next;
    }
    return min;
}

void findLower25(List *ls){
    float lower = 9999999999;
    Element *t;
    t = ls->head;
    while (t != NULL)
    {   
        if(t->data < 25) {
            lower = t->data;
            cout<<"\tLower than 25 are: "<<lower<<endl;
        }
        t = t->next;
    }
}

float avgOfElements(Element* head)
{
    // if head = NULL
    if (!head)
        return -1;
 
    int count = 0; // Initialize count
    int sum = 0;
    float avg = 0.0;
 
    Element* current = head; // Initialize current
    while (current != NULL) {
        count++;
        sum += current->data;
        current = current->next;
    }
 
    // calculate average
    avg = (double)sum / count;
 
    return avg;
}

float findAverage(List *ls) {
    Element *t;
    t = ls->head;

    int count = 0; // Initialize count
    int sum = 0;
    float average = 0.0;
    while (t != NULL)
    {
        count++;
        sum += t->data;
        t = t->next;
    }
     // calculate average
    average = (float)sum / count;
    return average;
}
 
int main () {

    List * ls;
    ls = createEmptyList();
    int max, min, average, lower, choice, number;
    while (choice != 5)
    {
        cout<<"\t1. Add some number"<<endl;
        cout<<"\t2. Find the maximum and minimum numbers in the linked list"<<endl;
        cout<<"\t3. Find average, min, max, and those numbers that are lower than 25"<<endl;
        cout<<"\t4. Display all data in the linked list"<<endl;
        cout<<"\t5. Exit"<<endl;
        cout<<"\tChoice: "; cin>>choice;

        switch(choice){
            case 1:
                while (number != 0)
                {
                    cout<<"\tEnter number: "; cin>>number;
                    if(number == 0) continue;
                    insertEnd(ls, number);      
                }
                break;
            case 2:
                cout<<"\n\t\tFind the maximum and minimum numbers in the linked list"<<endl;
                max = findMax(ls);
                min = findMin(ls);
                cout<<"\n\tMax = "<<max<<endl;
                cout<<"\n\tMin = "<<min<<endl;

                break;
            case 3:
                cout<<"\n\t\tFind average, min, max, and those numbers that are lower than 25"<<endl;
                max = findMax(ls);
                min = findMin(ls);
                cout<<"\n\tMax = "<<max<<endl;
                cout<<"\n\tMin = "<<min<<endl;
                findLower25(ls);
                cout<<"\n";
                average = findAverage(ls);
                cout<<"\n\tAverage = "<<average<<endl<<endl;
                break;
            case 4:
                int code;
                cout<<"\t1. Display from head"<<endl;
                cout<<"\t2. Display from tail"<<endl;
                cout<<"\tCode: "; cin>>code;
                if(code == 1) {
                    cout<<"\n\t\tAll numbers from head"<<endl;
                    displayFromHead(ls);
                }
                else if(code == 2) {
                    cout<<"\n\t\tAll numbers from tail"<<endl;
                    displayFromTail(ls);
                }else{
                    cout<<"\n\t\tThere is no code you just input"<<endl;
                }
                break;
            default:
                cout<<"\n\t\tThank for using our program.\n"<<endl;
                break;
        }
       
    }

    return 0;
}