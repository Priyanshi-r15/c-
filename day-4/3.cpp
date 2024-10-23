#include <iostream>

using namespace std;

int main()
{
    int size;
    int arr[8]={3,5,6,74,24,5,7,8,9};
    size = sizeof(arr) / sizeof(arr[0]);

     cout << "Size of Array = " << size <<endl;  

     for (int i=0;i<=size;i++)
    {
        cout << arr[i] << endl;
    }
    
    // cout << "Enter array size = ";
    // cin >> size;
    // int arr[size]={12, 13, 15, 43, 19, 23, 45, 56, 31, 81};
    // for (int i=0;i<=size;i++)
    // {
    //     arr[size]=i;
    // }
    //  cout << arr;
    //  cout << "Size of Array = " << sizeof(arr);  
}