#include<iostream>
using namespace std;
class Complex{
    int real,img;
    public:
    Complex(int r=0,int i=0):real{r},img{i}{}
    void show(){
        cout<<real<<","<<img<<endl;
    }
    Complex operator ++(int x){
        real++;
        img++;
        return Complex (real,img);
    }
    Complex operator++(){
        Complex t(real,img);
        real++;
        img++;
        return t;
    }


};


int main(){
    Complex c1{5,10};
    Complex c2=c1++;
    Complex c3=++c1;
    c2.show();
    c3.show();
    return 0; 


}