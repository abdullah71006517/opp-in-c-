#include<iostream>
using namespace std;

class Object{

public :

    string name ;
    int age ;
};
void input(Object      object_varable){

cin>>object_varable.age;
cin>>object_varable.name;
cout<<object_varable.age<<endl;
cout<<object_varable.name<<endl;

}


           ///   class name     varible
void Print(Object      object_varable){
cout<<object_varable.age<<endl;
cout<<object_varable.name<<endl;
object_varable.age=20;// modify

return ;

}
int main(){
Object  object_varable ;
//object_varable.age=10;
//object_varable.name="abdullah";
input(object_varable );
  Print(object_varable);///call by value
  //cout<<object_varable.age<<endl;/// outsite
return 0;
}

