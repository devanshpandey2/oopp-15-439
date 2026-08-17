#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    cout<<"array traverse using range based loop"<<endl;
    for(int i=0;i<n;i++){
        cout<<a[i]<<endl;
    }
    cout<<"Array traverse using auto keyword"<<endl;
    for(auto x:a){
        cout<<x<<endl;
    }
    return 0;

}