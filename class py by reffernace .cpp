#include<iostream>
using namespace std;

class Object{

public :

    string name ;
    int age ;
};
///             class name       &variable name
void input(Object      &object_varable){ // call by refernnce
object_varable.name="change name ";
object_varable.age=20;// modify
}


           ///   class name     varible
void Print(Object      object_varable){
    cout<<"output "<<endl;
cout<<object_varable.age<<endl;//44
cout<<object_varable.name<<endl;// tomal


return ;

}
int main(){
Object  object_varable ;
object_varable.age=10;
object_varable.name="abdullah";
cout<<object_varable.age<<endl;//44
cout<<object_varable.name<<endl;// tomal

input(object_varable );  /// call by reference
  Print(object_varable); ///call by value
  //cout<<object_varable.age<<endl;/// outsite
return 0;
}




