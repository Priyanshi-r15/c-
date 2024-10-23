// transpose of matrix
// a[2][3] = {1,2,3}
//           {4,5,6}

// a[3][2] = {1,4}
//           {2,5}
//           {3,6}
//-----------------
// a[3][3]={1,2,3}
//         {4,5,6}
//         {7,8,9}
//into
// a[3][3]={7,4,1} 
//         {8,5,2}
//         {9,6,3}
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
    int transpose[col][row];

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
     cout << endl;
    for (i = 0; i < row; i++)
    {
        for ( j = 0; j < col; j++)
        {
            transpose[j][i] = arr[i][j];
        }
    }
    cout << "The Transpose matrix is = " << endl;
    for ( i = 0; i < col; i++)
    {
        for ( j = 0; j < row; j++)
        {
          cout << transpose[i][j] << " ";
        }
        cout << endl;
    }
    
}