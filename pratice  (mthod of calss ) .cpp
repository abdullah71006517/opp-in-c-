/*methods in Classes
Problem:
Create a class `Rectangle` with two private attributes:
- `length`
- `width`
Add the following methods:
- A method to set the values of `length` and `width`.
- A method to calculate and return the area of the rectangle.
- A method to calculate and return the perimeter of the rectangle.
Write a program to demonstrate the use of these methods*/
#include<iostream>
using namespace std;

class Rectangle{

public :
float length ;
    float width ;
    ///method 1
void set_input(float x ,float y ){
length=x;
width=y;

}
///method 2
float result_area(){

return length*width;

}
/// method 3
    float result_perimeter( ){
    return 2.0*( length+width);


    }
    ///method 4
    void display (){
    cout<<" output"<<endl;
    cout<<"total area   = "<<result_area()<<endl;
    cout<<"result_perimeter  = "<<result_perimeter( )<<endl;


    }

};
int main(){
Rectangle   rectangle;
///called method 1
float x ,y ;
cout<<"Enter length  ";
cin>>x;
cout<<"Enter width ";
cin>>y;

rectangle.set_input(x,y);
///method 4
rectangle.display();



return 0;
}
