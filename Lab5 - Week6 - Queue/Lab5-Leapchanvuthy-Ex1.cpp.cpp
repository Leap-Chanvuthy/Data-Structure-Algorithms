#include<iostream>
#include "function.hpp"
    using namespace std;
    int main(){
        Queue *MQ;
        MQ = emptyQueue();

        enqueue (MQ , 10);
        enqueue (MQ , 20);
        enqueue (MQ , 30);
        enqueue (MQ , 40);
        enqueue (MQ , 50);
        enqueue (MQ , 60);
        dequeue(MQ);
        dequeue(MQ);
        displayQueue(MQ);

    }
