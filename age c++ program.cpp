/*
AUTHOR--AGNES ABUGA
DATE - SUNDAY FEB DATE 16
REG NO-BSE-05-0197/2024
CONTEXT--VOTING PROGRAM
*/

#include <iostream>
#include <string>
using namespace std;

int main()

{
    string name;
    int age;
    cout <<"Enter your name:";
    cin>>name;
    cout << "Enter your age: "<< endl;
    cin>>age;
    if(age<=18){
        cout<<"You cannot vote";

    }else{
    cout<<"You can vote";
    }
    return 0;
}
