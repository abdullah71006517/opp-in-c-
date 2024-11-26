#include <iostream>
using namespace std;
class Person {
public:
string name;
int age;
// Parameterized Constructor
Person(string n, int a) {
name = n;
age = a;
cout << "Parameterized Constructor Called\n";
}
// Copy Constructor
Person(const Person& p) {
name = p.name; // Copy the name
age = p.age; // Copy the age
cout << "Copy Constructor Called\n";
}
// Display method
void display() {
cout << "Name: " << name << ", Age: " << age << endl;
}
};
int main() {
Person p1("Alice", 25); // Create the first object
Person p2 = p1; // Create the second object as a copy of the

// Modify p2 to show that it’s an independent copy
//p2.name = "Bob";
//p2.age = 30;
// Display both objects
cout << "Person 1 Details:\n";
p1.display();
cout << "Person 2 Details:\n";
p2.display();
return 0;
}
