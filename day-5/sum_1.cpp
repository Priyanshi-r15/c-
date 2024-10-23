#include <iostream>
using namespace std;

int main()
{
     int row,col,sum,total,avg,i,j;
    cout << "Enter the size of row = " << endl;
    cin  >> row;
    cout <<"ENter the size of column = " << endl;
    cin >> col;

    int arr[row][col];

    for (i = 0; i < row; i++)
    {
        cout << "Enter the elements of the array:" << endl;
        for (j = 0; j < col; j++)
        {
            cout << "arr[" << i << "][" << j << "] = ";
            cin >> arr[i][j];
        }
    }

    int a,b,sum1=0,sum2=0;
    cout << "Enter row = ";
    cin >> a;

    cout << "Enter column = ";
    cin >> b;

    for (i = 0; i < row; i++)
    {
        
        sum1+=arr[a][i];
              
    }
      cout << "sum of row = " << sum1 << endl;
    for (j = 0; j < col; j++)
    {
        sum2 += arr[b][j];    
    }
     cout << "sum of column = " << sum2 << endl;
    
    
    
}