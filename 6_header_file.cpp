#include<iostream>

#include<5_intputoutput.cpp>

// THere are two types of header files
// 1.System files: _EDG_COMPILER 
// 2. User files
using namespace std;

int main(){
    int num1 , num2;
    cout<<"Enter the value of num1\n";
    cin>>num1;

    cout<<"Enter the value of num2\n";
    cin>>num2;


    // THis is << is for output called 'Insertion Operator and >> is for input  callled Extraction Operator
    cout<<num1<<"\n"<<num2;
    return 0;
}