#include <iostream>
using namespace std;

struct Element {
    int data;
    Element *next;
};

struct Queue {
    int size;
    Element *front, *rear;
};

Queue * createEmptyQueue() {
    Queue * q;
    q = new Queue();
    q->size = 0;
    q->front = NULL;
    q->rear = NULL;

    return q;
}

// insertEnd
void enqueue (Queue * q, int newData) { 
    Element * e;
    e = new Element();
    e->data = newData;
    e->next = NULL;
    if(q->size == 0) {
        q->front = e;
        q->rear = e;

    }else {
        q->rear->next = e;
        q->rear = e;
    }
    q->size++;
}

// deleteBegin

void dequeue(Queue * q) {
    Element * tmp;
    if(q->size == 0) {
        cout<<"Data underflow, cannot delete"<<endl;
    }else {
        tmp = q->front;
        q->front = q->front->next;
        delete tmp;
        if(q->size == 1) q->rear = NULL;
        q->size--;
    }
}
    
void displayData(Queue * q) {
    Element * tmp;
    tmp = q->front;
    while (tmp != NULL)
    {
        cout<<" "<<tmp->data<<endl;
        tmp = tmp->next;
    }
}