#include<iostream>

using namespace std;

int main(){

    // Break it 
    for (int i = 0; i < 4; i++)
    {
        cout<<i<<endl;
        if (i==2){
            break;
        }
    }

    // Continue it 
    for (int i = 0; i < 4; i++)
    {
        cout<<i<<endl;
        if (i==2){
            continue;
        }
    }
    
    return 0;
}
