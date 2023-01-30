#include<iostream>
    using namespace std;
    struct Element{
        int value;
        Element *Next;
    };

    struct Stack{
        Element *Top;
        Element *Rear;
        int size ;
    };

    Stack *emptyStack(){
        Stack *q;
        q = new Stack();
        q -> size = 0 ;
        q -> Rear = NULL;
        q -> Top  = NULL;
        return q;
    }
    // Insert End
    void Push(Stack *q , string newValue){
        Element *e;
        e = new Element();
        e -> value = newValue;
        e -> Next = NULL;
            if (q -> size == 0){
                q -> Rear = e;
                q -> Top = e;
            } else{
                q -> Top -> Next = e;
                q -> Top = e;
            }
            q -> size++;
    }

    // Delete from Rear

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
        tmp = q -> Rear;
        while (tmp != NULL){
            cout<<""<<tmp -> value<<endl;
            tmp = tmp -> Next;
        }
    }

    int main (){

        Stack *MS;
        MS = emptyStack();
        Push (MS , "I love learning data structure for advance algorithm");
        displayStack(MS);

        return 0;
    }
