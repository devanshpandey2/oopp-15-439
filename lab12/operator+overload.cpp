#include<bits/stdc++.h>
using namespace std;
class point{
    private:
    int x,y;
    public:
    point (int x=0,int y=0):x{x},y{y}{}
    void show (){
        cout<<x<<","<<y<<endl;
    }
    // point operator + (point p){
    //     int a=x+p.x;
    //     int b=y+p.y;
    //     point q(a,b);
    //     return q;
    // }
    // friend point operator +(point t1 ,point t2  );
    friend point operator +(point p ,int x  );
    
};
// point operator +(point t1 ,int t2 ){
//     return point (t1.x+t2.x,t1.y+t2.y);
//  }
point operator +(point p ,int x ){
    return point (p.x+x,p.y+x);
}
int main(){
    point p1(10,5);
    point p2(5,11);
    p1.show();
    p2.show();
    // point p3=(p1 + p2);
    point p3(p1+5);
    p3.show();
}