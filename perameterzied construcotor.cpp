#include<iostream>
using namespace std;
class Student{
public :
    string name;
    int roll;
    float gpa ;
    ///method
    void output(){
    cout<<name<<"  " ;
    cout<<roll<<"   ";
    cout<<gpa<<"   " ;
    cout<<endl;
    }
/// specal method( constructor )
/// class name () {
Student( ){
cout<<"default constructor called "<<endl;
name=" null";
roll=50;
gpa=4.5;
}



// perameterized construtor
Student(string change ,int r){
cout<<"perametarized constructor called "<<endl;
name=change;
roll=r;
//roll=50;
//gpa=4.5;
}



};

int main(){
 Student   student1, student2("abdullah",45);

 student1.output();
 student2.output();
/*
 cout<<student1.name<<endl;//output null
 cout<<student2.name<<endl;// abdulah
 cout<<student1.roll<<endl;// 50
 cout<<student2.roll<<endl;// 45*/


return 0;
}

