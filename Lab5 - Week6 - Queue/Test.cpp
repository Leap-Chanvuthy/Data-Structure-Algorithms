#include<iostream>
using namespace std;
struct Element {
    int value;
    Element * next;
};

struct Queue{
    int size;
    Element * front, * rear;
};
Queue * createEmptylist(){
    Queue * q;
    q = new Queue();
    q->size = 0;
    q->front = NULL;
    q -> rear = NULL;

    return q;

}

void enqueue(Queue*q , int newData){
    Element *e;
    e = new Element();
    e->value = newData;
    e->next = NULL;
    if(q->size == 0){
        q->front = e;
        q->rear = e;
    }
    else {
        q->rear->next = e;
        q->rear = e;
    }
    q->size++;
}

void dequeue(Queue *q) {
    Element *tmp;
    tmp = q->front;
    if(q->size == 0) {
        cout<<"Cannot delete"<<endl;
    }
    else {
        tmp = q->front;
        q->front = q->front->next;
        free(tmp); // delete tmp

        if(q->size == 1) q->rear = NULL;
        q->size--;
    }
}

void displayData(Queue *q){
    Element *tmp;
    tmp = q->front;
    while (tmp != NULL)
    {
        cout<<" "<<tmp->value<<endl;
        tmp = tmp->next;
    }

}


int main(){

    Queue * myQ;
    myQ = createEmptylist();

    enqueue(myQ, 1);
    enqueue(myQ, 2);
    enqueue(myQ, 3);
    enqueue(myQ, 4);
    dequeue(myQ);
    dequeue(myQ);
    dequeue(myQ);
    enqueue(myQ, 1);
    enqueue(myQ, 1);
    displayData(myQ);
    enqueue(myQ, 1);
    enqueue(myQ, 2);
    enqueue(myQ, 3);
    dequeue(myQ);
    displayData(myQ);



}
