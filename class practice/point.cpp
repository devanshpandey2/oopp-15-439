#include<iostream>

using namespace std;

class Point{
    private:
    int x,y;
    public:
    Point(): x{0}, y{0} 
    {
        cout<<"Default Constructor "<<endl;
    }
    Point (int p,int q): x{p}, y{q} 
    {
        cout<<"Parameterized Constructor "<<endl;
    }
    void show(){
        cout <<x<<","<<y<<endl;
    }
    // Point add(Point q){
    //     Point temp;
    //     temp.x = x + q.x;
    //     temp.y = y + q.y;
    //     return temp;

    // }
    // Point add(Point q){
    //     point r;
    //     r.x = x + q.x;
    //     r.y = y + q.y;
    //     return r;   
    // }
    Point add(Point q){
        return Point(x + q.x, y + q.y);
    }

    

};

int main(){
    Point p(5,10),q(10,20);
    p.show();
    q.show();
    Point r = p.add(q);
    r.show();
    return 0;
}