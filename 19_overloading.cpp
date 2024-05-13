#include<iostream>
using namespace std;

int sum(int a, int b){
    return a+b;

}

int sum(int a, int b, int c){
    return a+b+c;
}


// THis is the overloading..
int volume(double r, double h){
    return (3.14 *r*r*h);
}

int volume(int a){
    return a*a*a;
}

int volume(int l , int b , int h){
    return(l*b*h);
}

int main(){
    cout<<"The sum of 3 and 6 is "<<sum(3,6)<<endl;
    cout<<"The sum of 3,6,7 is "<<sum(3,6,7)<<endl;

    cout<<"The volume of cube is "<<volume(11)<<endl;
    cout<<"The volume of cyclinder is "<<volume(2,4)<<endl;
    cout<<"The volume of cubiod is "<<volume(1,2,4)<<endl;
    return 0;
}