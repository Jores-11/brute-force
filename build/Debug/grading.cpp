#include <iostream>
using namespace std;

int main(){
    int grade;

    cout <<"ENTER A NUMBER TO KNOW YOUR GRADE: ";
    cin>>grade;

    if (grade<=20){
        cout <<"You have'E'GRADE"<<"\033[30m";
    }else if (grade<=30){
        cout <<"You have 'D' GRADE"<<"\033[31m";
    }else if (grade<=40){
        cout <<"You have 'C-' GRADE"<<"\033[32m";
    }else if (grade<=50){
        cout <<"You have 'C' GRADE"<<"\033[33m";
    }else if (grade<=60){
        cout <<"You have 'B' GRADE"<<"\033[34m";
    }else if (grade<=70){
        cout <<"You have 'B+' GRADE"<<"\033[35m";
    }else if (grade<=80){
        cout <<"You have 'A' GRADE"<<"\033[36m";
    }else if (grade<=100){
        cout <<"You have 'A+' GRADE"<<"\033[37m";
    }else{
        cout<<"You have entered a wrong number";
    }
    
    
    
}