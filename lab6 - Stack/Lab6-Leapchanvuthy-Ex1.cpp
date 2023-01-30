#include<iostream>
    using namespace std;
    struct Element{
        int value;
        Element *Next;
    };

    struct Stack{
        Element *Top;
        Element *Front;
        int size ;
    };

    Stack *emptyStack(){
        Stack *q;
        q = new Stack();
        q -> size = 0 ;
        q -> Front = NULL;
        q -> Top  = NULL;
        return q;
    }
    // Insert End
    void Push(Stack *q , int newValue){
        Element *e;
        e = new Element();
        e -> value = newValue;
        e -> Next = NULL;
            if (q -> size == 0){
                q -> Front = e;
                q -> Top = e;
            } else{
                q -> Top -> Next = e;
                q -> Top = e;
            }
            q -> size++;
    }

    // Delete from front

    void Pop (Stack *q){
        Element *tmp;
        if (q -> size == 0){
            cout <<"Data underflow !!!"<<endl;
        }else{
            tmp = q -> Top ;
            q -> Top = q-> Top -> Next;
            delete tmp;
                if (q -> size == 1) q -> Top = NULL;
                q -> size --;
        }
    }

    // Display the data
    void displayStack(Stack *q){
        Element *tmp;
        tmp = q -> Top;
        while (tmp != NULL){
            cout<<""<<tmp -> value<<endl;
            tmp = tmp -> Next;
        }
    }


    int main(){
        Stack *myStack;
        myStack = emptyStack();

        Push (myStack , 1);
        Push (myStack , 2);
        Push (myStack , 3);
        Push (myStack , 4);
        Push (myStack , 5);
        displayStack(myStack);
        cout<<"Delete Stack";
        Pop(myStack);
        displayStack(myStack);
        return 0;
    }
