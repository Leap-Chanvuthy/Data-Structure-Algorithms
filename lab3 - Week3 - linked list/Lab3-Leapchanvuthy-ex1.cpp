#include<iostream>
#include<string>
    using namespace std;
    class Node{         // create list with class

        public:
        string value;
        Node *Next;
    };
    void printlist(Node *n){        //create function to print list
        while (n!=NULL){
            cout<<n->value<<endl;
            n = n -> Next;
        }
    }
    string insertbegin(Node**head,string newValue){ // create function to insert data infront of list
        Node* newNode = new Node ();
        newNode -> value = newValue;
        newNode -> Next = *head;

        *head = newNode;
    }
     int main(){
        int option,value;
        Node* head = new Node();
        Node* second = new Node();
        Node* third = new Node();

        head -> value = "abc";
        head -> Next = second;
        second -> value = "def";
        second -> Next = third;
        third -> value = "ghi";
        third -> Next = NULL;
        while (option !=0){
            cout<<"0. Exit Program"<<endl;
            cout<<"1. Add Student ID"<<endl;
            switch(option){
                case 1:
                 //  cin>>insertbegin(&head,value);
                   break;

                default:
                    cout<<"Thanks for using this program!!!";
                    break;
            }

        }

        printlist(head);
     }
