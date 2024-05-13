#include<iostream>
#include<iomanip>

using namespace std;

int main(){
    // int a = 34;
    // cout<<"the value of a was:"<<a;
    // a = 45;
    // cout<<"The value of a was:"<<a;

    // const is constant , bcoz it's const

    // const int b = 35;
    // cout<<b<<endl;
    // b = 34; /*tHIS WILL THROW ERROR*/
    // cout<<b<<endl;

    int a = 3, b = 45, c = 3251;

    cout<<"the value of a without sew is "<<a<<endl;
    cout<<"the value of b without sew is "<<b<<endl;
    cout<<"the value of c without sew is "<<c<<endl;

    cout<<"the value of a without sew is "<<setw(4)<<a<<endl;
    cout<<"the value of b without sew is "<<setw(4)<<b<<endl;
    cout<<"the value of c without sew is "<<setw(4)<<c<<endl;


    // SImpiliy uses the BODMAS Rule
    int d = a*b + c;
    int e = a * (b+c);
    cout<<e<<endl;
    cout<<d<<endl;
    return 0;

}