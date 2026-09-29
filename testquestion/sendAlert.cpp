#include<bits/stdc++.h>
using namespace std;
class NotificationService{
public:
    NotificationService(){

    }
    void sendAlert(long phoneNumber, int otp){
        cout << "send otp: "<< otp << "to mobile: "<< phoneNumber <<endl;
    }

    void sendAlert(string email, string subject, string body){
        cout << "send an email to " << email << endl;
        cout << "Subject: " << subject << endl;
        cout << "MSG: "<< body << endl;
    }

    void sendAlert(string deviceToken, string title, string payload, int priority){
        cout << "Push Notification" << endl;
        cout << "Token: " << deviceToken << endl;
        cout << "Title: " << title << endl;
        cout << "Payload: " << payload << endl;
        cout << "Priority: " << priority << endl;
    }

};
int main(){

}