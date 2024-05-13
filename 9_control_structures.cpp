#include<iostream>

using namespace std;

int main(){
    cout<<"This is tutorial 9"<<endl;

    int age;
    cout<< "Please ENter your age"<<endl;
    cin>>age;

    // if (age<18){

    //     string name;
    //     cout<<"Please ENter your name"<<endl;
    //     cin>>name;
    //     string Luficer = "Luficer";

    //     if (name == Luficer){
    //         cout<<"You can come"<<endl;
    //     }
    //     else{
    //         cout<< "You can't , you are not LUFICER"<<endl;
    //     }


    // }

    // else if (age==18){
    //     cout<<"You  are okay now"<<endl;
    // }

    // else {
    //     cout<<"You can come to the party"<<endl;
    // }


    // ?Switch statements
    switch (age)
    {
    case 18:
        cout<<"You are 18 years";
        break;
    
    default:
        if (age<18){

        string name;
        cout<<"Please ENter your name"<<endl;
        cin>>name;
        string Luficer = "Luficer";

        if (name == Luficer){
            cout<<"You can come"<<endl;
        }
        else{
            cout<< "You can't , you are not LUFICER"<<endl;
        }
        break;
    }
    return 0;
}