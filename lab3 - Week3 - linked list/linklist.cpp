#include<iostream>
    using namespace std;
    class Node{
        public:
        int value;
        Node *Next;
    };
    void printlist(Node*n){
        while (n!=NULL){
            cout<<n->value<<endl;
            n = n -> Next;
        }
    }
    void insertBegin(Node**head , int newValue){
        Node* newNode = new Node();
        newNode -> value = newValue;
        newNode -> Next = *head;
        *head = newNode;
    }

    int main(){
        int n,value;
        Node *head = new Node();
        Node *second = new Node();
        Node *third = new Node();

        head -> value = 1;
        head -> Next = second;
        second -> value = 2;
        second -> Next = third;
        third -> value = 3;
        third -> Next = NULL;

        cout<<"Insert New Value :"<<endl;
        cin>>value;
        insertBegin(&head,value);
        printlist(head);


    }
