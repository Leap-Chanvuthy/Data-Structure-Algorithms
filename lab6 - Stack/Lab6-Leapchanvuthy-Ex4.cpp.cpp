#include<iostream>
    using namespace std;
    struct Element{
        int value;
        Element *Next;
    };

    struct Queue{
        Element *Front;
        Element *Rear;
        int size ;
    };

    Queue *emptyQueue(){
        Queue *q;
        q = new Queue();
        q -> size = 0 ;
        q -> Front = NULL;
        q -> Rear  = NULL;
        return q;
    }
    // Insert End
    void enqueue(Queue *q , int newValue){
        Element *e;
        e = new Element();
        e -> value = newValue;
        e -> Next = NULL;
            if (q -> size == 0){
                q -> Front = e;
                q -> Rear = e;
            } else{
                q -> Rear -> Next = e;
                q -> Rear = e;
            }
            q -> size++;
    }

    // Delete from front

    void dequeue (Queue *q){
        Element *tmp;
        if (q -> size == 0){
            cout <<"You Completed all task . "<<endl;
        }else{
            tmp = q -> Front ;
            q -> Front = q-> Front -> Next;
            delete tmp;
                if (q -> size == 1) q -> Rear = NULL;
                q -> size --;
        }
    }

    // Display the data
    void displayQueue (Queue *q){
        Element *tmp;
        tmp = q -> Front;
        while (tmp != NULL){
            cout<<"DONE !!!"<<tmp -> value<<endl;
            tmp = tmp -> Next;
        }
    }
    int main(){
        Queue *myqueue;
        myqueue = emptyQueue();
        char ans;
        int option , task;
            cout<<"There are 4 tasks !!!"<<endl;
                for (int i=1 ; i<=4 ; i++){
                    enqueue(myqueue , i);
                        cout<<"Do you want to complete task right now ?"<<endl;
                        cout<<"Press yes or y to complete task :"<<endl;
                        cin>>ans;
                        if (ans == 'yes' || ans == 'y' ){
                            displayQueue(myqueue);
                            dequeue (myqueue);
                        }else{
                            dequeue(myqueue);
                                i--;
                        }
                } 

        return 0;
    }