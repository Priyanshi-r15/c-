#include <iostream>

using namespace std;

int main()
{
    int start, end, size, count;
    size = end-start+1;

    cout << "Enter value of the 1st year = ";
    cin >> start;

    cout << "Enter value of the 2nd year = ";
    cin >> end;

        int a[size];
        count=0;
        // for (int s = 0; s < size; s++)
        // {+
        //     cout << 
        // }
    

    for (int i = start; i <= end; i++)
    {
        if (i%4==0)
        {
            a[count]=i;
            count++;
            cout << " " << i;
            cout << endl;
        }
        // else
        // {
        //     cout << "try again";
        // }
    }
   
    

}