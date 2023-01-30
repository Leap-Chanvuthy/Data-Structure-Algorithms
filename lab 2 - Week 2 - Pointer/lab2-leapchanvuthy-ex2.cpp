#include<iostream>
    using namespace std;
    int main(){
        int a;
        int *b;
        b = &a;
        cout<<"Enter integer number :"; cin>>a;
        *b = *b + 7;
        cout<<"Your number is :"<<*b;
    }
