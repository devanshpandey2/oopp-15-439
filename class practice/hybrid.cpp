#include<bits/stdc++.h>
using namespace std;
class emp{
    public:
    emp(){
        cout<<"emp constructor"<<endl;
    }
    ~emp(){
        cout<<"emp Dest"<<endl;
    }
};
class man{
    public:
    man(){
        cout<<"man cons."<<endl;
    }
    ~man(){
        cout<<"man Dest."<<endl;
    }

};
class family{
    public:
    family(){
        cout<<"family cons."<<endl;
    }
    ~family(){
        cout<<"family dest."<<endl;

    }
};
class dir:public family,public man,public emp{
    public:
    dir(){
        cout<<"dir cons."<<endl;
    }
    ~dir(){
        cout<<"dir dest."<<endl;
    }
};
int main(){
    dir d;
    return 0;
}