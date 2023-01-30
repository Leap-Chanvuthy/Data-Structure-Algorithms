#include <iostream>
using namespace std;

int sumSuite(int n){
    int sum = 0;
    for (int i = 0; i <= n; i++){
        cout<<i;
        sum = sum + i;
        if(i == n){
            cout<<"=";
        }else{
            cout<<"+";
        }
    }
    cout<<sum<<"\n\n";
    return sum;
}

float convertCelsuis(float celsuis){
    float fahrenheit;
    // Celsius to fahrenheit
    fahrenheit = (celsuis * 9.0) / 5.0 + 32;

    // Display result
    return fahrenheit;
}
float convertFarenheit(float farenheit){
    float celsuis;
    celsuis=(farenheit - 32) * 5/9;
    return celsuis;
}
int sumDigit(int n){
    int sum = 0, m;
    while(n > 0) {
        m = n % 10;
        sum = sum + m;
        n = n / 10;
    }
    return sum;
}


int main() {

    int choice;
    while(choice != 4){
        cout<<"\t*****Option*****\t\n";
        cout<<"1. Sum of suite "<<endl;
        cout<<"2. Convert Temperature "<<endl;
        cout<<"3. Sum of digit "<<endl;
        cout<<"4. Exit program "<<endl;
        cout<<"Choose: ";
        cin>>choice;
        switch (choice)
        {
        case 1:
            int number;
            cout<<"\nEnter number: "; cin>>number;
            cout<<"\nSum is: "<<sumSuite(number)<<endl;
            break;
        case 2:
            int choice;
            cout<<"1. Convert from celsuis to farenheit\n";
            cout<<"2. Convert from farentheit to celsuis\n";
            cout<<"Choice: "; cin>>choice;
            if(choice == 1){
                float celsius, fahrenheit;
                cout <<"\nEnter the temperature in Celsius: "; cin >> celsius;
                cout << "\nThe temperature in degree Fahrenheit: " <<convertCelsuis(celsius)<<"\n\n";
            }else if(choice == 2){
                float farenheit, celsius;
                cout<<"\nEnter Temperature in Farenheit : "; cin>>farenheit;
                cout<<"\nThe temperature in degree Celsius: " <<convertFarenheit(farenheit)<<"\n\n";
            }
            break;
        case 3:
            int n;
            cout<<"Enter a number: "; cin>>n;
            cout<<"Sum of digit is: "<<sumDigit(n)<<"\n\n";
            break;
        default:
            cout<<"Thank for using our program.\n";
            break;
        }
    }



    return 0;
}
