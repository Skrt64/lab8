#include <iostream>
#include <string>
using namespace std;

int main(){
    string name,movie,when,wtf;
    cout << "Fahsai: Sawadee ka...Can you tell me your name?" << "\n";
    cout << "?????: ";
    getline(cin,name);
    cout << "Fahsai: Wow!!! " << name << " is a really cool name." << "\n";
    string his_id,first_his_id,last_his_id;
    cout << "Fahsai: I think you are an Engineering student. What is your student ID?"<< endl;
    cout << name << ": ";
    getline(cin,his_id);
    first_his_id = his_id[0];
    last_his_id = his_id[1];
    his_id = first_his_id+last_his_id;
    cout << "Fahsai: I think you may be GEAR " << stoi(his_id) - 12 << ". I have a free movie ticket for you." << endl;
    cout << "Fahsai: Let's go to the cinema together!!!" << endl;
    cout << "Fahsai: What movie do you want to watch?" << endl;
    cout << name << ": ";
    getline(cin,movie);
    cout << "Fahsai: So....which day are you free to go with me?" << endl;
    cout << name << ": ";
    getline(cin,when);
    cout << "Fahsai: " << when << "....that is OK!!! I'm looking forward to watching " << movie << " with you." << endl;
    cout << name << ": ";
    cin >> wtf;
    cout << "Fahsai: 555+ see you " << when << ". Bye Bye \\(^ ^)/";

    return 0;
}









//Dialog of the first example is given below.

/*
Fahsai: Sawadee ka...Can you tell me your name?
?????: Luke Skywalker
Fahsai: Wow!!! Luke Skywalker is a really cool name.
Fahsai: I think you are an Engineering student. What is your student ID?
Luke Skywalker: 590610999
Fahsai: I think you may be GEAR 47. I have a free movie ticket for you.
Fahsai: Let's go to the cinema together!!!
Fahsai: What movie do you want to watch?
Luke Skywalker: Star Wars VII
Fahsai: So....which day are you free to go with me?
Luke Skywalker: Next Monday
Fahsai: Next Monday....that is OK!!! I'm looking forward to watching Star Wars VII with you.
Luke Skywalker: May the Force be with you krub
Fahsai: 555+ see you Next Monday. Bye Bye \(^ ^)/
*/
