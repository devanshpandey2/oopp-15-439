#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<string> subjects = {
        "Mathematics",
        "Physics",
        "Chemistry",
        "Computer Science",
        "English"
    };

    cout << "Subjects in the collection:" << endl;

    for (auto subject : subjects)
    {
        cout << subject << endl;
    }

    return 0;
}