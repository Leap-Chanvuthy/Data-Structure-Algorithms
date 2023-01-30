#include<iostream>
#include<cmath>
    using namespace std;
    float solvequadratic(int a , int b , int c,float *x1 , float *x2 ){
         double delta,real_part,img_part;
            delta = b*b-4*a*c;
            cout<<"delta = \n"<< delta;
                if(delta == 0){
                    cout<<"\nThere are two same roots \n";
                    *x1 = *x2 = -b/2*a;
                    cout<<"x1 = x2 = "<<*x1,*x2;
                }
                if(delta <0){
                    cout<<"\nThere are two different roots in complex\n";
                    real_part = -b/2*a;
                    img_part = sqrt(-delta)/2*a;
                    cout<<"x1 = "<<real_part<< "+ i"<<img_part<<endl;
                    cout<<"x2 = "<<real_part<<  "+ i"<<img_part<<endl;
                }
                if(delta > 0){
                    cout<<"\nThere are two roots\n";
                    *x1 = (-b + sqrt(delta))/2*a;
                    *x2 = (-b-sqrt(delta))/2*a;
                    cout<<"x1 = \n"<<*x1;
                    cout<<"x2 = \n"<<*x2;
                }

    }
    int main(){
        float a,b,c,x1,x2;
            cout<<"Enter a b c :"; cin>>a>>b>>c;
            cout<<solvequadratic(a , b , c, &x1 , &x2);

    }