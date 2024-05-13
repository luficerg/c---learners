#include<iostream>

// THere are two types of header files
// 1.System files: _EDG_COMPILER 
// 2. User files
using namespace std;

int main(){
    int num1 , num2;
    cout<<"Enter the value of num1\n";
    cin>>num1;

    cout<<"Enter the value of num2\n";
    cin>>num2;


    // THis is << is for output called 'Insertion Operator and >> is for input  callled Extraction Operator
    cout<<num1<<"\n"<<num2<<"\n";

    // THis is the types of operators
    // 1.Arthimetic Operator
    cout<<num1 +num2<<endl;
    cout<<num1 -num2<<endl;
    cout<<num1 *num2<<endl;
    cout<<num1 /num2<<endl;
    cout<<num1 %num2<<endl;
    cout<<num1++<<endl;
    cout<<num1--<<endl;
    cout<<++num1 <<endl;
    cout<<--num1<<endl;

    // 2.Comparison Operator
    cout<<(num1==num2) <<endl;
    cout<<(num1!=num2) <<endl;
    cout<<(num1 <=num2) <<endl;
    cout<<(num1 >=num2) <<endl;
    cout<<(num1 >num2) <<endl;
    cout<<(num1 <num2) <<endl;


    // 3.Logical OPerator
    cout<<((num1==num2) && (num1<num2))<<endl;
    cout<<((num1 == num2) || (num1<num2))<<endl;

    int a = 5; //  101
    int b = 3; //  011

    // 4. Bitwise OPerator
    // Bitwise AND
    int bitwise_and = a & b;

    // Bitwise OR
    int bitwise_or = a | b;

    // Bitwise XOR
    int bitwise_xor = a ^ b;

    // Bitwise NOT
    int bitwise_not = ~a;

    // Bitwise Left Shift
    int left_shift = a << 2;

    // Bitwise Right Shift
    int right_shift = a >> 1;

      // Printing the Results of
    // Bitwise Operators
    cout << "AND: " << bitwise_and << endl;
    cout << "OR: " << bitwise_or << endl;
    cout << "XOR: " << bitwise_xor << endl;
    cout << "NOT a: " << bitwise_not << endl;
    cout << "Left Shift: " << left_shift << endl;
    cout << "Right Shift: " << right_shift << endl;

    return 0;
}