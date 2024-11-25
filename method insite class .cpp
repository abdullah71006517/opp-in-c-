#include<iostream>
using namespace std;
class Method{
public:
    string name="abdullah" ;
    int age=21;
    // inside method dclar
    void outside_method();
    void inside_method(){
    cout<<"call inside method and print attributes"<<endl;
       cout<<name<<endl;
       cout<<age<<endl;

    }
};
/// type - class name - oprator - mehtod name
void Method :: outside_method(){
cout<< " call outside method  and attributes "<<endl;
          name="kamal";
  cout<<name<<endl;
       cout<<age<<endl;


}
int main(){
Method   method;
// access method
/// object varible name .methodname();
 method.inside_method();
/// outside method call
method.outside_method();
return 0;
}
