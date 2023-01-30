#include<iostream>
    using namespace std;
    int main(){
        int arr[7],*p;
        int i;
        p = &arr[7];
        cout<<"Enter 7 integers :"<<endl; 
            for(i=0 ; i<7 ; i++){
            cin>>arr[i];
           
        }
        cout<<"Array from its own variable :"<<endl;
            for (i=0 ; i<7 ; i++){
                cout<<arr[i]<<",";
            }

        cout<<"\nArray from pointer variable :"<<endl;
            for (i=0 ; i<7 ; i++){
                cout<<*(arr + i)<<",";
            }

    }