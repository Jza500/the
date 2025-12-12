#include <iostream>
#include <string>
using namespace std;

int main(){
    
    string Ans,Ans2,Ans3,Ans4;
    int Run;

    cout << "Fahsai: Sawadee ka...Can you tell me your name?\n";
    cout << "?????: ";
    getline(cin,Ans);
    cout << "Fahsai: Wow!!! " << Ans << " is a really cool name.\n";
    cout << "Fahsai: I think you are an Engineering student. What is your student ID?\n";
    cout << Ans << ": ";
    cin >> Run;
    cin.ignore();
    cout << "Fahsai: I think you may be GEAR " << (Run/10000000)-12 << ". I have a free movie ticket for you.\n";
    cout << "Fahsai: Let's go to the cinema together!!!\n";
    cout << "Fahsai: What movie do you want to watch?\n";
    cout << Ans << ": ";
    getline(cin,Ans2);
    cout << "Fahsai: So....which day are you free to go with me?\n";
    cout << Ans << ": ";
    getline(cin,Ans3);
    cout << "Fahsai: " << Ans3 << "....that is OK!!! I'm looking forward to watching " << Ans2 <<" with you.\n";
    cout << Ans << ": ";
    getline(cin,Ans4);
    cout << "Fahsai: 555+ see you " << Ans3 << ". Bye Bye \\(^ ^)/";
}


