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
    int user;
    cout << "Enter a number from above array = ";
    cin >> user;

    for ( i = 0; i < row; i++)
    {
        for (j= 0; j < col; j++)
        {
            if (user == arr[i][j])
            {
                cout << "The position of " << user << " = arr[" << i << "][" << j << "]";
            }
            
        }
        
    }
    
}