#include<iostream>
    using namespace std;
    void sum1(double *sum, unsigned int n){
        double sums = 0.00;

        for (float i=1 ; i<=n ; i++){
            sums= (sums +(1/i));
        }
        cout<<"Summation 1 is :"<<sums<<endl;

    }
    double sum2(unsigned int n){

        double summation =0.00;
        for (float i=1;i<n;i++){
            summation = (summation + (1/i));
        }
        return summation;
    }

    int main(){
       double sum;
       unsigned int n;
        cout<<"Enter size of number :"; cin>>n;
        sum1(&sum , n);
        cout<<"Summation 2 :"<<sum2(n)<<endl;

    }
