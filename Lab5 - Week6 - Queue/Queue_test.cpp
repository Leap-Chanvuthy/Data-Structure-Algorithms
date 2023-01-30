#include<iostream>
    using namespace std;

    struct Element{
        int data;
        Element *Next;
    };

    struct Queue{
        Element *Front;
        Element *Rear;
        int size;
    };

    Queue *emptyQueue(){
        Queue *q;
        q = new Queue();
        q -> size =0;
        q -> Front = NULL;
        q -> Rear  = NULL;
        return q;

    }

    void Enqueue(Queue *q , int newData){
        Element *e;
        e = new Element();
        e -> data = newData;
        e -> Next = NULL;
            if (q -> size == 0){
                q -> Front = e;
                q -> Rear = e;
            }else{
                q -> Rear -> Next = e;
                q -> Rear = e;
            }
            q -> size ++;
    }

    void Dequeue(Queue *  q){
        Element *tmp;
            if (q -> size == 0){
                cout <<"Data underflow"<<endl;
            }else{
                tmp = q -> Front;
                q -> Front = q -> Front -> Next;
                delete tmp;
            }
            if (q -> size == 1){
                q -> Rear = NULL;
                q -> size --;
            }
    }

    Queue displayQueue(Queue *q){
        Element *tmp;
        tmp = q -> Front;
            if(q -> size == NULL){
                cout<<"Data not found !"<<endl;
            }
            while (tmp != NULL){
                cout<<"The data :"<<tmp -> data<<endl;
                tmp = tmp -> Next;
            }
    }

    int main(){

        Queue *myQueue;
        myQueue = emptyQueue();
        Enqueue (myQueue , 10);
        Enqueue (myQueue , 20);
        Enqueue (myQueue , 30);
        Enqueue (myQueue , 40);
        Enqueue (myQueue , 50);
        displayQueue(myQueue);





        return 0;
    }
