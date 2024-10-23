#include <iostream>
using namespace std;

int main()
{
      int row,col,i,j,sum=0;

    cout << "enter the number of rows = ";
    cin >> row;

    cout << "Enter the number of column = ";
    cin >> col;

    int arr[row][col];
     for ( i = 0; i < row ; i++)
    {
        for ( j = 0; j < col; j++)
        {
            cout << "arr[" << i << "][" << j << "] = ";
            cin >> arr[i][j];
        }
        cout << endl;
    }   
      for ( i = 0; i < row ; i++)
    {
        for (j = 0; j < col; j++)
        {
              cout << arr[i][j] << " ";
        }
        cout << endl;
    }  
      for ( i = row; i > 0 ; i--)
    {
        for (j = 0; j < col; j++)
        {
              if (row == col)
           {
                 sum += arr[i][i];
           }
           
        }      
    }
        cout << "sum of diagonal = " << sum;
    }  