/*Default Constructor:
Problem:
Create a class `Circle` with a default constructor that initializes the radius to 5.
- Add a method to calculate and display the area of the circl */

#include<iostream>
using namespace std;

class Circle{

public :

    double   radius ;
   ///Default Constructor
   Circle(){
   radius=5;///set default value

   }
   ///display method
   void display(){
    /// power(radius,2)
   cout<<"area of the circle =" << 3.1416*(radius*radius)<<endl;

   }

};
int main(){
Circle  circle;
circle.display();


}
