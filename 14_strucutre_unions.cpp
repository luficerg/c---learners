#include<iostream>
using namespace std;

// struct employee
// {
//     int eID;
//     char favChar;
//     float salary;

// };

// Use different memory
typedef struct employee
{
    int eID;
    char favChar;
    float salary;

} emp;

// Use same memory
union money{
    int girls;
    char car;
    float pounds;
};

int main(){
    struct employee Harry;
    emp Luficer;
    Harry.eID =1;
    Harry.favChar = 'c';
    Harry.salary = 120000;

    cout<<"THis value of "<<Harry.salary<<endl;
    cout<<"THis value of "<<Harry.favChar<<endl;
    cout<<"THis value of "<<Harry.eID<<endl;


    union money m1;
    m1.car = 34;
    cout<<m1.car;

    return 0;
}
