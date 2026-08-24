#include<iostream>
using namespace std;

class Student
{
    string name, branch, section;
    int roll, marks[5], total;
    float percent;

public:
    void input()
    {
        cout<<"Enter name:";
        cin>>name;

        cout<<"Enter Branch:";
        cin>>branch;

        cout<<"Enter section:";
        cin>>section;

        cout<<"Enter Roll no:";
        cin>>roll;

        for(int i=0;i<5;i++)
        {
            cout<<"Enter marks of "<<i+1<<":";
            cin>>marks[i];
        }
    }

    void cal()
    {
        total = 0;
        for(int i=0;i<5;i++)
        {
            total += marks[i];
        }
        percent = total / 5.0;
    }

    void show()
    {
        cout<<"\nName: "<<name;
        cout<<"\nBranch: "<<branch;
        cout<<"\nSection: "<<section;
        cout<<"\nRoll No: "<<roll;

        cout<<"\nMarks: ";
        for(int i=0;i<5;i++)
        {
            cout<<marks[i]<<" ";
        }

        cout<<"\nTotal Marks: "<<total;
        cout<<"\nPercentage: "<<percent<<"%";
    }
};

int main()
{
    Student s;

    s.input();
    s.cal();
    s.show();

    return 0;
}