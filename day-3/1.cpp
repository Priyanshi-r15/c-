#include <iostream>

using namespace std;

int main()
{
    int a, sum=0;
    cout << "Enter the size of array = ";
    cin >> a;

    int box[a];

    for ( int i = 0; i < a; i++)
    {
        cout << "a[" << i << "] = ";
        cin >> box[i];
    }
    for (int i = 0; i < a; i++)
    {
        sum = sum + box[i];
    }
    cout << "ANS = " << sum;
    
}