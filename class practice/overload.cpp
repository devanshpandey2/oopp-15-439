#include<iostream>
using namespace std;
class Complex{
    int real,img;
    public:
    Complex (int r=0, int i=0):real{r},img{i}{}
    void show(){
        cout<<real<<","<<img<<endl;
    }
    // Complex operator+(Complex c){
    //     return Complex (real+c.real,img+c.img);
    // }
    // Complex operator+(Complex &c){
    //     int r=this->real + c.real;
    //     int i=this->img + c.img;
    //     return Complex(r,i);
    // }

    friend Complex operator+(Complex c,Complex d);
    friend Complex operator+(Complex c,int a);
    friend Complex operator+(int a,Complex c);
    // Complex operator+(int x){
    //     return Complex(real+x,img+x);
    // }
    friend ostream& operator<<(ostream& out, const Complex& c) {
        return out << c.real << "," << c.img;
    }

    
};
Complex operator+(Complex c,Complex d){
    return Complex(c.real+d.real,c.img+c.img);
}
Complex operator+(Complex c,int a){
    return Complex(c.real+a,c.img+a);
}
Complex operator+(int a,Complex c){
    return Complex(a+c.real,a+c.img);
}
int main(){
    Complex c1{5,10},c2{10,20},c3,c4,c5;
    c3=c1 + c2;
    c1.show();
    c2.show();
    c3.show();
    c4=c3+5;
    c4.show();
    cout << c4 << endl;
    c5=5+c4;
    c5.show();


    return 0;

}

