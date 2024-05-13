#include<iostream>
using namespace std;

int sum(int a, int b){
    int c = a+b;
    return c;

}

void swap(int a , int b){
    int temp = a;
    a = b;
    b = temp;
}


void swapPointer(int* a , int* b){
    int temp = *a;
    *a = *b;
    *b = temp;
}

void swapReferenceVar(int &a , int &b){
    int temp = a;
    a = b;
    b = temp;
}

int main(){

    int a = 4, b = 8;

    // THis wont' work at all
    cout<<"The sum of the"<<a<<"  and "<<b<<"  is "<<sum(a,b)<<endl;
    swap(a,b);
    cout<<"The sum of the"<<a<<"  and "<<b<<"  is "<<sum(a,b)<<endl;

    // This will work by using Pointer
    cout<<"The sum of the"<<a<<"  and "<<b<<"  is "<<sum(a,b)<<endl;
    swapPointer(&a,&b);
    cout<<"The sum of the"<<a<<"  and "<<b<<"  is "<<sum(a,b)<<endl;

    // THis will work by using Reference
    cout<<"The sum of the"<<a<<"  and "<<b<<"  is "<<sum(a,b)<<endl;
    swapReferenceVar(a,b);
    cout<<"The sum of the"<<a<<"  and "<<b<<"  is "<<sum(a,b)<<endl;

    return 0;
}