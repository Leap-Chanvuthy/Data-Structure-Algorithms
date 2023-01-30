#include<iostream>
    using namespace std;
    int sumsuit(int n){
        int i,a=0;
                for (i=1;i<=n;i++){
                    a = a+i; 
                    cout<<i;
                    if(i==n){
                        cout<<"=";
                    }else{
                        cout<<"+";
                    }}
               return a;}
    int main (){
        float num;
            cout<<"Enter any number:\n";
            cin>>num;
            cout<<"Total sumation is :"<<sumsuit(num)/num;
            
    }