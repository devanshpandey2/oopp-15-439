#include <bits/stdc++.h>
using namespace std;
int inline input(){
    int x;
    cin>>x;
    return x;
}
int add(int x,int y){
    return x+y;
}
int defaultArg(int x,int y=10){
    return x+y;
}
int fnoverloading(int x,int y){
    return x+y;
}
double fnoverloading(double x,double y){
    return x+y;
}
int main (){
    int a = input();
    int b = input();
    cout<<add(a,b)<<endl;
    cout<<defaultArg(a)<<endl;
    cout<<fnoverloading(a,b)<<endl;
    cout<<fnoverloading(1.2,3.4)<<endl;
    return 0;
}