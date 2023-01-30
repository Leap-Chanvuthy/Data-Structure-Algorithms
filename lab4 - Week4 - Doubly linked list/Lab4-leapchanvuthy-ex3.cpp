#include<iostream>
    using namespace std;

    class Node{
        public:
        string value;
        Node* next;
        Node* previous;
    };

    void printforwar(Node*head){
        Node *travelser = head;
        while (travelser != nullptr){
            cout<<travelser->value<<endl;
            travelser = travelser ->next;
        }
    }

    void printbackward(Node*tail){
        Node *travelser = tail;
            while(travelser != nullptr){
                cout<<travelser->value;
                travelser = travelser ->previous;
            }
    }

    int main(){

        Node *head;
        Node *tail;

        Node* node = new Node();
        node -> value = "A";
        node ->next = nullptr;
        node -> previous = nullptr;
        head = node;
        tail = node;

        node = new Node();
        node -> value = "B";
        node -> next = nullptr;
        node -> previous = tail;
        tail -> next = node;
        tail = node ;

        node = new Node();
        node -> value = "C";
        node -> next = nullptr;
        node -> previous = tail;
        tail -> next = node;
        tail = node ;

        node = new Node();
        node -> value = "D";
        node -> next = nullptr;
        node -> previous = tail;
        tail -> next = node;
        tail = node ;

        node = new Node();
        node -> value = "E";
        node -> next = nullptr;
        node -> previous = tail;
        tail -> next = node;
        tail = node ;

        node = new Node();
        node -> value = "F";
        node -> next = nullptr;
        node -> previous = tail;
        tail -> next = node;
        tail = node ;

        node = new Node();
        node -> value = "G";
        node -> next = nullptr;
        node -> previous = tail;
        tail -> next = node;
        tail = node ;

        node = new Node();
        node -> value = "H";
        node -> next = nullptr;
        node -> previous = tail;
        tail -> next = node;
        tail = node ;

        node = new Node();
        node -> value = "I";
        node -> next = nullptr;
        node -> previous = tail;
        tail -> next = node;
        tail = node ;

        node = new Node();
        node -> value = "J";
        node -> next = nullptr;
        node -> previous = tail;
        tail -> next = node;
        tail = node ;

        node = new Node();
        node -> value = "K";
        node -> next = nullptr;
        node -> previous = tail;
        tail -> next = node;
        tail = node ;

        node = new Node();
        node -> value = "L";
        node -> next = nullptr;
        node -> previous = tail;
        tail -> next = node;
        tail = node ;

        node = new Node();
        node -> value = "M";
        node -> next = nullptr;
        node -> previous = tail;
        tail -> next = node;
        tail = node ;

        node = new Node();
        node -> value = "N";
        node -> next = nullptr;
        node -> previous = tail;
        tail -> next = node;
        tail = node ;

        node = new Node();
        node -> value = "O";
        node -> next = nullptr;
        node -> previous = tail;
        tail -> next = node;
        tail = node ;

        node = new Node();
        node -> value = "P";
        node -> next = nullptr;
        node -> previous = tail;
        tail -> next = node;
        tail = node ;

        node = new Node();
        node -> value = "P";
        node -> next = nullptr;
        node -> previous = tail;
        tail -> next = node;
        tail = node ;

        node = new Node();
        node -> value = "Q";
        node -> next = nullptr;
        node -> previous = tail;
        tail -> next = node;
        tail = node ;

        node = new Node();
        node -> value = "R";
        node -> next = nullptr;
        node -> previous = tail;
        tail -> next = node;
        tail = node ;

        node = new Node();
        node -> value = "S";
        node -> next = nullptr;
        node -> previous = tail;
        tail -> next = node;
        tail = node ;

        node = new Node();
        node -> value = "T";
        node -> next = nullptr;
        node -> previous = tail;
        tail -> next = node;
        tail = node ;

        node = new Node();
        node -> value = "U";
        node -> next = nullptr;
        node -> previous = tail;
        tail -> next = node;
        tail = node ;

        node = new Node();
        node -> value = "V";
        node -> next = nullptr;
        node -> previous = tail;
        tail -> next = node;
        tail = node ;

        node = new Node();
        node -> value = "W";
        node -> next = nullptr;
        node -> previous = tail;
        tail -> next = node;
        tail = node ;

        node = new Node();
        node -> value = "X";
        node -> next = nullptr;
        node -> previous = tail;
        tail -> next = node;
        tail = node ;

        node = new Node();
        node -> value = "Y";
        node -> next = nullptr;
        node -> previous = tail;
        tail -> next = node;
        tail = node ;

        node = new Node();
        node -> value = "Z";
        node -> next = nullptr;
        node -> previous = tail;
        tail -> next = node;
        tail = node ;

        cout <<"Forward Letter is :"<<endl;
        printforwar(head);

        cout<<"Backward Letter is :"<<endl;
        printbackward(tail);




    }
