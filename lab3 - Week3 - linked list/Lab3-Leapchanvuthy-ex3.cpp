#include<iostream>
    using namespace std;
    class Node{         // create list with class

        public:
        int value;
        Node *Next;
    };
    void printlist(Node *n){        //create function to print list
        while (n!=NULL){
            cout<<n->value<<endl;
            n = n -> Next;
        }
    }
    void insertbegin(Node**head,int newValue){ // create function to insert data infront of list
        Node* newNode = new Node ();
        newNode -> value = newValue;
        newNode -> Next = *head;

        *head = newNode;
    }
    void insertend(Node**head , int newValue){ // create function to insert data at the end of list
        Node *newNode = new Node();
        newNode -> value = newValue;
        newNode -> Next = NULL;
        if (*head == NULL){
            *head = newNode;
        }
        Node *last = *head;
        while (last -> Next !=NULL){
            last = last -> Next;
        }
        last -> Next = newNode;

    }


    int main(){
        Node* head = new Node();
        Node* second = new Node();
        Node* third = new Node();
/*
        head -> value = 1;
        head -> Next = second;
        second -> value = 2;
        second -> Next = third;
        third -> value = 3;
        third -> Next = NULL;
*/

        insertbegin(&head,7);
        insertbegin(&head,1);
        insertend(&head,0);
        insertend(&head,4);
        printlist(head);

    }
