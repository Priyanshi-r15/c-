#include <iostream>

using namespace std;

int main()
{
    int a,b, sum=0;
    cout << "Enter the size of array = ";
    cin >> a;

    int box[a];
    int box1[a];
    int total[a];

       cout << "Enter the elements of first array " << endl;;
    for ( int i = 0; i < a; i++)
    {
        cout << "a[" << i << "] = ";
        cin >> box[i];
    }
    cout << endl;

   cout << "Enter the elements of second array " << endl;
     for ( int i = 0; i < a; i++)
    {
        cout << "a[" << i << "] = ";
        cin >> box1[i];
    }
    cout << endl;

    for ( int i = 0; i < a; i++)
    {
        total[i]=box[i]+box1[i];
    }
    cout << endl;

    for (int i = 0; i < a; i++)
    {
        cout << "total[" << i << "] = " << total[i] << endl;
    }

//     for (int i = 0; i < a; i++)
//     {
//         sum = sum + box[i];
//      cout << "ANS = " << sum;
//    }
    
}