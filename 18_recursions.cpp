#include<iostream>
using namespace std;

int factorial(int n){
    if (n<=1){
        return 1;
    }
    return n * factorial(n-1);
}

int fibonnaci(int n){
    if (n < 2){
        return 1;
    }

    return fibonnaci(n-2) + fibonnaci(n-1);
}


int main(){
    int num;
    cout<<"ENter the number"<<endl;
    cin>>num;
    cout<<"The factorial of "<<num<<" is "<<factorial(num)<<endl;

    cout<<"The fibonacci of "<<num<<" is "<<fibonnaci(num)<<endl;
    return 0;
}