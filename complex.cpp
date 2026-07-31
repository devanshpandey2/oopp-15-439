#include <bits/stdc++.h>
using namespace std;
class Complex{
    private:
    int real,img;
    public:
    void input(){
        cin>>real>>img;
    }
    void show(){
        cout<<real;
        if(img>=0)
        cout<<"+"<<img<<"i"<<endl;
        else
        cout<<img<<"i"<<endl;
    }
    void add(Complex p){
        real+=p.real;
        img+=p.img;
    }
    // void add(Complex c1,Complex c2){
    //     real=c1.real+c2.real;
    //     img=c1.img+c2.img;

    // }
    Complex add(int a,int b){
        Complex c;
        c.real=real+a;
        c.img=img+b;
        return c;
    }
};
int main(){
    Complex c1,c2;
    c1.input();
    c2.input();
    c1.show();
    c2.show();
    c2.add(c1);
    c2.show();
    // Complex c3;
    // c3.add(c1, c2);
    // c3.show();
    return 0;

}