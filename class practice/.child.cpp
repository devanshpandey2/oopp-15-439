#include<iostream>
#include<string>
using namespace std;
class Employee{
    protected:
    string name;
    double salary;
    Employee(string name="", double salary=10000):name(name),salary(salary){}
    void showEmployee(){
        name="Deva";
        salary=10000;
    }


};
class manager:public Employee{
    string dept;
    public:
    manager(string n,double s, string dept):Employee(n,s),dept(dept){

    }
    void show(){
        cout<<name<<"\n"<<salary<<"\n"<<dept<<endl;              
    }
};