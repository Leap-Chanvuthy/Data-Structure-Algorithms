#include <iostream>
#include <string>

using namespace std;
  struct Person {
        string name;
        string zodiac;
        string favoriteColor;
        int age;
    };
int main () {
    Person person[30];

    for (int i = 0; i <= 3; i++)
    {
        cout<<"Person NO "<<i + 1<<endl;
        cout<<"Enter name: "; cin>>person[i].name;
        cout<<"Enter zodiac sign: "; cin>>person[i].zodiac;
        cout<<"Enter favorite color: "; cin>>person[i].favoriteColor;
        cout<<"Enter age: "; cin>>person[i].age;
    }

    cout<<"All people in the list\n";
    for (int i = 0; i <= 3; i++)
    {
        cout<<"\tStudent NO "<<i + 1<<endl;
        cout<<"\tName "<<person[i].name<<endl;
        cout<<"\tZodiac sign"<<person[i].zodiac<<endl;
        cout<<"\tFavorite color"<<person[i].favoriteColor<<endl;
        cout<<"\tAge"<<person[i].age<<endl;
    }

    for (int i = 0; i < 1; i++)
    {
        cout<<"The oldest person is: \n";
        if(person[0].age > person[1].age && person[0].age > person[2].age && person[0].age > person[3].age) {
            cout<<"\n\n\tName\t"<<person[0].name<<endl;
            cout<<"\tZodiac sign\t"<<person[0].zodiac<<endl;
            cout<<"\tFavorite color\t"<<person[0].favoriteColor<<endl;
            cout<<"\tAge\t"<<person[0].age<<endl;

        }else if(person[1].age > person[0].age && person[1].age > person[2].age && person[1].age > person[3].age){
            cout<<"\n\tName\t"<<person[1].name<<endl;
            cout<<"\tZodiac sign\t"<<person[1].zodiac<<endl;
            cout<<"\tFavorite color\t"<<person[1].favoriteColor<<endl;
            cout<<"\tAge\t"<<person[1].age<<endl;

        }
        else if(person[2].age > person[1].age && person[2].age > person[0].age && person[2].age > person[3].age){
            cout<<"\n\tName\t"<<person[2].name<<endl;
            cout<<"\tZodiac sign\t"<<person[2].zodiac<<endl;
            cout<<"\tFavorite color\t"<<person[2].favoriteColor<<endl;
            cout<<"\tAge\t"<<person[2].age<<endl;

        }else{
            cout<<"\n\tName\t"<<person[3].name<<endl;
            cout<<"\tZodiac sign\t"<<person[3].zodiac<<endl;
            cout<<"\tFavorite color\t"<<person[3].favoriteColor<<endl;
            cout<<"\tAge\t"<<person[3].age<<endl;

        }
    }

}
