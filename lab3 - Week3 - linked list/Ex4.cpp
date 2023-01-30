#include<iostream>
    using namespace std;
    struct Element{
        int Value;
        Element *Next;
    };
    struct Queue{
        Element *front , *rare;
        int size;
    };
    Queue EmptyList(){
        Queue *q;
        q = new Queue();
        q -> size =0;
        q -> front = NULL;
        q -> rare = NULL;
    }

    void addCustomer(Queue *q , int newData){
        Element *e;
        e -> Value = newData;
        e -> Next = NULL;
        if (q ->size == 0){
            q -> front = e;
            q-> rare = e;
        }else{
            q -> rare = e;
            q -> rare -> Next = e;
        }
        q ->size++;
    }
    void removeCustomer(Queue *q){
        Element *e;
    }

    void displayCustomer(Queue *)

    int main(){
        
    }