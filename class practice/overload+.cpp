#include<iostream>
using namespace std;
class Complex{
    int real,img;
    public:
    Complex(int r=0,int i=0):real{r},img{i}{}
    void show(){
        cout<<real<<","<<img<<endl;
    }
    friend Complex operator +(int x ,Complex c);
 


};
Complex operator +(int x ,Complex c){
    return Complex(x+c.real,x+c.img);
}

int main(){
    Complex c1{5,10};
    Complex c2=5+c1;
    c2.show();

}