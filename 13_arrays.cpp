#include<iostream>
using namespace std;
int main(){
    int marks[] = {23,45,56,756};
    int mathMarks[4];

    cout<<mathMarks<<endl;
    cout<<marks<<endl;

    cout << "Enter the array size: ";
    int arraySize;
    cin >> arraySize;
    int arr[arraySize];
    cout << "Enter the array elements " << endl;
    for (int i = 0; i < arraySize; i++)
    {
        cin >> arr[i];
    }

    cout << "Printing the array in the original order" << endl;
    for (int i = 0; i < arraySize; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}