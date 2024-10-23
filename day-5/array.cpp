#include<iostream>
using namespace std;
int main()
{
    int row,col,sum,total,avg;
    cout << "Enter the size of row = " << endl;
    cin  >> row;
    cout <<"ENter the size of column = " << endl;
    cin >> col;

    int arr[row][col];

    for (int i = 0; i < row; i++)
    {
        cout << "Enter the elements of the array:" << endl;
        for (int j = 0; j < col; j++)
        {
            cout << "arr[" << i << "][" << j << "] = ";
            cin << arr[i][j];
        }
        
    }
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            sum+= arr[i][j];
        }
        
    }
    avg=row*col;
    total= sum/avg;
     cout << "The average of all elements = " << total << endl;
}