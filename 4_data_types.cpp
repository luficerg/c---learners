#include<iostream>

using namespace std;
int glo = 6; 
/*THis is the global scope*/

void sum(){
    cout<<glo;
}

int main(){
    // int a = 4;
    // int b = 5;
    int glo = 3;
    int a = 1, b = 15;
    float pi = 3.14159;
    char c = 'd';
   
    sum();
    cout<<"\n"<<glo;
    cout<<"\nThis is tutorial4. Here the value of a is "<<a<<". THe value of b is "<<b;
    cout<<"\nTHis is the value of pi is"<<pi;
    cout<<"\nTHis is the value of c is "<<c;
    return 0;
}