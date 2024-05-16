#include<iostream>
using namespace std;


class Employee{
    int id;
    int salary;
    
    public:
        void setId(void);
        void getId(void);

};

void Employee::setId(void){
    salary = 122;
    cout<<"Enter the ID of Employee"<<endl;
    cin>>id;
    
}

void Employee::getId(void){
    cout<<"The id of this employee is"<<id<<endl;
}
int main(){

    Employee Facebook[4];
    for (int i = 0; i < 4; i++)
    {
        Facebook[i].setId();
        Facebook[i].getId();
    }
    
    return 0;
}