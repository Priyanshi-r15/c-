//convert 2-d array into 1-d array
#include <iostream>
using namespace std;

int main()
{
      int row,col,i,j;
    

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
        
    }   
      for ( i = 0; i < row ; i++)
    {
        for (j = 0; j < col; j++)
        {
              cout << arr[i][j] << " ";

        }
        
    }   
}