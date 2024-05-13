#include<iostream>
using namespace std;


int sum(int a, int b){
    int c = a+b;
    return c;
}

// Prototype function example
void g(void);

int main(){
    int num1, num2;

    cout<< "ENter the first number"<<endl;
    cin>>num1;
    cout<< "ENter the second number"<<endl;
    cin>>num2;

    cout<<"THe sum is "<<sum(num1,num2)<<endl;

    g();
    return 0;
}

// Declaring function later 
void g(){
    cout<<"Hello, Good Night"<<endl;
}