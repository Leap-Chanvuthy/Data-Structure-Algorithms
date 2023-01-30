#include<iostream>
#include<cmath>
    using namespace std;
    void findminmax(int number[] , int a , int *min , int *max){
        int i;
            for (i=1;i<=a;i++){
                if(*min > number[i]){
                    *min = number[i];
                }
                if(*max < number[i]){
                    *max = number[i];
                }
            }
            cout<<"Maximum of array is :"<<*max<<endl;
            cout<<"Minimun of array is :"<<*min<<endl;
    }



    int main(){
        int a,i,number[7],min,max;
        a = sizeof(number)/sizeof(number[0]);
            for(i=0;i<7;i++){
                cout<<"Enter array:"; cin>>number[i];
                }
            findminmax(number , a , &min , &max);

    }
