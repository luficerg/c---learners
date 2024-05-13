#include<iostream>
using namespace std;

inline int product(int a , int b){
    static int c = 0;
    c++;
    return a*b+c;
}


float money(int money_amount, float factor = 1.2){
    return money_amount * factor;
}

int main(){
    int a, b;
    cout<<"ENter the value of a and b"<<endl;
    cin>>a>>b;

    cout<<"The product of a and b is "<<product(a,b)<<endl;
    cout<<"The product of a and b is "<<product(a,b)<<endl;
    cout<<"The product of a and b is "<<product(a,b)<<endl;
    cout<<"The product of a and b is "<<product(a,b)<<endl;
    cout<<"The product of a and b is "<<product(a,b)<<endl;
    cout<<"The product of a and b is "<<product(a,b)<<endl;
    cout<<"The product of a and b is "<<product(a,b)<<endl;
    cout<<"The product of a and b is "<<product(a,b)<<endl;

    cout<<"FOR VIP for "<<money(121, 1.5)<<endl;
    return 0;
}