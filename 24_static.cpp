#include<iostream>
using namespace std;

class Employee{

    int id;
    // Count is number of times the class is previous called..
    static int count;

    public:
        void setData(void){
            cout<<"Please enter your id"<<endl;
            cin>>id;
            count++;
        }

        void getData(void){
            cout<<"The id of this employee is "<< id<<" and this is number of the employee "<<count<<endl;
        }

        static void getCount(void){

            // Static function will work with only static value
            // cout<<id THis will throw error
            cout<<"The value of the count is "<<count<<endl;
        }
};

int Employee::count;

int main(){

    Employee harry, rohan , lovish;

    harry.setData();
    harry.getData();
    Employee::getCount();

    rohan.setData();
    rohan.getData();
    Employee::getCount();

    lovish.setData();
    lovish.getData();
    Employee::getCount();

    return 0;
}