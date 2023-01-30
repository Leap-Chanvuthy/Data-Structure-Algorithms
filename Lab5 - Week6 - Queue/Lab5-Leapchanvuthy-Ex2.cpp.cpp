#include <iostream>
using namespace std;

struct Element {
    string data;
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

void displayData(Queue * q) {
    Element * tmp;
    tmp = q->front;
    while (tmp != NULL)
    {
        cout<<" "<<tmp->data;
        tmp = tmp->next;
    }
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

// insertEnd
void enqueue (Queue * q, string newData) {
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
    if(newData == "*") {
        dequeue(q);
    }
    q->size++;
}

int main() {

    Queue * myQueue;
    myQueue = createEmptyQueue();

    enqueue(myQueue, "E");
    enqueue(myQueue, "A");
    enqueue(myQueue, "S");
    enqueue(myQueue, "*");
    enqueue(myQueue, "Y");
    enqueue(myQueue, "*");
    enqueue(myQueue, "Q");
    enqueue(myQueue, "U");
    enqueue(myQueue, "E");
    enqueue(myQueue, "*");
    enqueue(myQueue, "*");
    enqueue(myQueue, "*");
    enqueue(myQueue, "S");
    enqueue(myQueue, "T");
    enqueue(myQueue, "*");
    enqueue(myQueue, "*");
    enqueue(myQueue, "*");
    enqueue(myQueue, "I");
    enqueue(myQueue, "O");
    enqueue(myQueue, "*");
    enqueue(myQueue, "N");
    enqueue(myQueue, "*");
    enqueue(myQueue, "*");
    enqueue(myQueue, "*");

    displayData(myQueue);



    return 0;
}
