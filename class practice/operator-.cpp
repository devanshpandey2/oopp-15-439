#include<iostream>
using namespace std;
class Complex{
    int real,img;
    public:
    Complex(int r=0,int i=0):real{r},img{i}{}
    void show(){
        cout<<real<<","<<img<<endl;
    }
    // Complex operator -(){
    //     return Complex(-real,-img);
    // }
    friend Complex operator -(Complex p);


};

Complex operator -(Complex p){
        return Complex(-p.real,-p.img);
    }
int main(){
    Complex c1{5,10};
    Complex c3=-c1;
    c3.show();
    

}