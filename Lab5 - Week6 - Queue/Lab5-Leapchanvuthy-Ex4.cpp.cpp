#include<iostream>
    using namespace std;
    struct Element{
        double phone;
        string name;
        string sex;
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
    void enqueue(Queue *q , string Name , string Sex , double Phone){
        Element *e;
        e = new Element();
        e -> name = Name;
        e -> sex = Sex;
        e -> phone = Phone;
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
            cout <<"Data underflow !!!"<<endl;
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
        if (tmp == NULL){
            cout<<"No data found !!!";
        }
        while (tmp != NULL){
            cout<<"Name :"<<tmp -> name<<endl;
            cout<<"Sex :"<<tmp -> sex<<endl;
            cout<<"Phone number :"<<tmp ->phone<<endl;
            tmp = tmp -> Next;
        }
    }
    int main(){
        Queue *Myqueue;
        Myqueue = emptyQueue();
        int option;
        double phone;
        string name , sex;
        while (option !=4){
            cout <<"Welcome to our restuarant !"<<endl;
            cout << "Menu :"<<endl;
            cout <<"1. Add customer to the queue"<<endl;
            cout <<"2. Remove customer from the queue"<<endl;
            cout <<"3. Display customer in the queue"<<endl;
            cout <<"4. Exit program !"<<endl;
            cout <<"Enter your option :"; cin>>option;

                    switch (option)
                    {
                    case 1:
                        cout<<"Enter customer name :"<<endl; cin>>name;
                        cout<<"Enter customer sex :"<<endl; cin>>sex;
                        cout <<"Enter customer phone number :"<<endl; cin>>phone;
                        enqueue(Myqueue , name , sex , phone);


                        break;
                    case 2:
                        dequeue(Myqueue);

                        break;

                    case 3:
                        displayQueue(Myqueue);

                        break;
                    default:
                        cout<<"Program end of progress"<<endl;

                        break;
                    }
                }
        return 0;
    }
