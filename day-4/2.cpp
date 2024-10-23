#include <iostream>

using namespace std;

int main()
{
    int arr[5] = {4, 5, 8, 10, 45};
    for (int size : arr)
    {
        cout << size << endl;
    }
    cout << "Size of Array = " << sizeof(arr);
    
}