#include<iostream>
using namespace std;
class Complex{
    int real,img;
    public:
    Complex(int r=0,int i=0):real{r},img{i}{}
    void show(){
        cout<<real<<","<<img<<endl;
    }
    Complex operator -(Complex p){
        return Complex(real-p.real,img-p.img);
    }


};


int main(){
    Complex c1{5,10};
    Complex c2{2,3};
    Complex c3=c2-c1;
    c3.show();
    

}