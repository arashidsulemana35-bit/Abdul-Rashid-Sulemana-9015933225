#include<iostream>
using namespace std;
int main ()
{
    int r, c;
    int A[10][10];
    cout << "Enter the number of rows of the matrix: ";
    cin >> r;
    cout<<"Enter the number of columns of the matrix: ";
    cin>>c;
    cout << "Enter the elements in the matrix: ";
    
    for (int i = 0; i < r; i++)
        for (int j = 0; j < c; j++)
        
            cin >> A[i][j];           
    cout << "Matrix : \n ";
    
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
            cout << A[i][j] << "  ";
        cout << "\n ";
    }
    
    if (r== c)
        cout << "The entered array is a square matrix.";
    else
    {
        cout << "The entered array is not a square matrix.";	
        exit(0);
    }
    return 0;
}
