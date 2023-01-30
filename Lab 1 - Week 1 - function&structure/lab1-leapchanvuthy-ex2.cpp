#include<iostream>
using namespace std;
    int main(){
        int i=0;
            cout<<"\t\tDisplay number from 1 to 1000\n";
            for (i=1;i<=1000;i++){

                if(i==100){
                continue;
                }
                if (i==200){
                    continue;
                }
                 if(i==300){
                continue;
                }
                if (i==400){
                    continue;
                }
                 if (i==500){
                    continue;
                }

                cout<<","<<i;

            }


        return 0;
    }
