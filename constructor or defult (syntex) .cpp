#include<iostream>
using namespace std;
class Student{
public :
    string name;
    int roll;
    float gpa ;
    ///method
    void input(){
    cin>>name;
    cin>>roll;
    cin>>gpa;
    }
/// specal method
/// class name () {
Student(){

cout<<"default constructor called "<<endl;
name="unknown ";
roll=50;
gpa=4.5;
}



};

int main(){
 Student   student1, student2;

 cout<<student2.roll<<endl;
 cout<<student2.gpa<<endl;


return 0;
}
