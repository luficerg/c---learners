#include<iostream>

using namespace std;

int c = 235;
int main(){
    // int a, b, c;
    // cout<<"enter the value of a :"<<endl;
    // cin>>a;
    // cout<<"Enter the value of b :"<<endl;
    // cin>>b;
    // c = a+b;
    // cout<<c<<endl;
    // cout<<"this global value of c is :"<<::c<<endl;


    // Variables , flaot, double ,& long double literals
    float d = 3.14;
    long double e = 34.4;
    cout<<"the value of d is "<<d<<endl<<"The value of e is "<<e<<endl;

    cout<<"The size of 34.4 is "<<sizeof(34.4)<<endl;
    cout<<"The size of 34.4f is "<<sizeof(34.4f)<<endl;
    cout<<"The size of 34.F is "<<sizeof(34.4F)<<endl;
    cout<<"The size of 34.4l is "<<sizeof(34.4l)<<endl;
    cout<<"The size of 34.4L is "<<sizeof(34.4L)<<endl;

    float x = 455;
    float & y = x;

    cout<<x<<endl;
    cout<<y<<endl;
    y = 35;
    // NOw, both values are synchronizated
    cout<<x<<endl;
    cout<<y<<endl;


    // Typecasting

    int a = 45;
    float b = 45.6;
    
    cout<<"The value of a  is "<<float(a)<<endl;
    cout<<'The value of b is '<<int(a)<<endl;



    return 0;
}