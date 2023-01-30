#include<iostream>
    using namespace std;
    struct student{
        int age;
        int quiz;
        int midterm;
        int final;
        int totalscore;
        string name;
        string ID;
        string sex;
    };
    int main (){
        student students[20];
        int option,l=0,min,max,i;
        double average;
        string searchbyID;

        cout<<"\t\t ======= MENU ======="<<endl;
        cout<<"1. Add to students into list"<<endl;
        cout<<"2. Display all student information"<<endl;
        cout<<"3. Show students who gets max total score"<<endl;
        cout<<"4. Display all student information by ID (search by an ID)"<<endl;
        cout<<"5. find min , max and average score of this class"<<endl;
        cout<<"0. Quit the program !!!"<<endl;
        cout<<"=========================="
        cout<<"Enter your option:";  cin>>option;
        do{
            switch(option){
                case 1:
                    for (i=0;i<2;i++){
                        cout<<"Enter student name:"<<endl; cin>>students[i].name;
                        cout<<"Enter student age:"<<endl; cin>>students[i].age;
                        cout<<"Enter student sex:"<<endl; cin>>students[i].sex;
                        cout<<"Enter student ID:"<<endl; cin>>students[i].ID;
                        cout<<"Enter student's quiz score:"<<endl; cin>>students[i].quiz;
                        cout<<"Enter student's midterm score:"<<endl; cin>>students[i].midterm;
                        cout<<"Enter student's final score:"<<endl; cin>>students[i].final;
                            l = l+1;
                        students[i].totalscore = (students[i].quiz + students[i].midterm + students[i].final);
                    }
                    break;

                case 2:
                    for(i=0 ; i<l ; i++){
                        cout<<"Input :"<<i + 1<<endl;
                        cout<<"\t\t Student name :"<<students[i].name;
                        cout<<"\t\t Student age :"<<students[i].age;
                        cout<<"\t\t Student ID :"<<students[i].ID;
                        cout<<"\t\t Student sex :"<<students[i].sex;
                        cout<<"\t\t Student quiz :"<<students[i].quiz;
                        cout<<"\t\t Student midterm :"<<students[i].midterm;
                        cout<<"\t\t Student fianl :"<<students[i].final;
                    }
                    break;

                case 3:
                    for (i=0 ; i<l ; i++){
                        if (students[i].totalscore > students[0].totalscore)
                            students[i].totalscore = students[0].totalscore;
                    }
                    cout<<"Higest Scored Student is :"<<students[0].name;
                    break;

                case 4:
                    cout<<"What is students ID ?";
                    cin>>searchbyID;
                        for (i=0 ; i<l ; i++){
                            if (students[i].ID == searchbyID){
                                cout<<"students who own this ID name :"<<students[i].name;
                            }else{
                                cout<<"NOT FOUND !!!";
                            }

                        }
                        break;
                case 5:

                        for (i=0 ; i<l ; i++){
                            if (students[i].totalscore > students[0].totalscore){
                                max = students[i].totalscore;
                            }
                            if (students[i].totalscore < students[0].totalscore){
                                min = students[i].totalscore;
                            }
                            average = min + max;
                            cout<<"Minimum score is :"<<min<<endl;
                            cout<<"Maximum score is :"<<max<<endl;
                            cout<<"Average scored in this class is :"<<average<<endl;                        }
                        break;
                default:
                    cout<<"PROGRAM END OF PROGRESS !!!";
                    break;



            }
        }
        while(option !=0);


    }
