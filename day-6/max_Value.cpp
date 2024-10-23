//Determine the maximum value in 2d array 
//also determine position of the max value.
#include <iostream>
using namespace std;

int main()
{
    int row,col,max,maxRow,maxCol;

     cout << "enter the number of rows = ";
    cin >> row;

    cout << "Enter the number of column = ";
    cin >> col;

    int arr[row][col];

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cout << "arr[" << i << "][" << j << "] = ";
            cin >> arr[i][j];
        }   
    }
    
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cout << arr[i][j] << "  ";
        }    
    }
     max = arr[0][0];
     maxRow = 0;
     maxCol = 0;
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; i < col; j++)
        {
            if (arr[i][j] > max)
            {
                max = arr[i][j];
                 maxRow = i;
                maxCol = j;
            }
        }
        
    }
   cout << "arr[" << maxRow << "][" << maxCol << "] = " << max;

    // for (int i = 0; i < row; i++)
    // {
    //     for (int j = 0; j < col; j++)
    //     {
    //         if (arr[i][j]==max)
    //         {
    //             cout << "arr[" << i << "][" << j << "] = " << max;
    //         }
            
    //     }
        
    // }
    
    
}