#include<iostream>
using namespace std;
int main(){
    // Pointer - Data type which holds the addres of otherdata

    int a = 3;
    int* b = &a;

    cout<<"THe address of a is "<<b<<endl;
    cout<<"THe address of b is "<<&a<<endl;

    int** c= &b;
    cout<<"the address of b is "<<c<<endl;
    cout<<"THe address of b is "<<&b<<endl;

    // ANd you can do this forever..

    return 0;
}