#include <iostream>
using namespace std;
int main()
{
    int n, m;
    cin >> n >> m;
    int a[n][m];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> a[i][j];
        }
    }
    // spiral order logic
    int row_start = 0, row_end = n - 1, column_start = 0, column_end = m - 1;
    while (row_start<=row_end&&column_start<=column_end)
    {
        //for row_start
        for (int col=column_start; col <= column_end; col++)
        {
           cout<<a[row_start][col]<<" ";
        }
        row_start++;
        //for cloumn_end
        for (int i = row_start; i <=row_end; i++)
        {
            cout<<a[i][column_end]<<" ";
        }
        column_end--;

        for (int col=column_end; col >= column_start; col++)
        {
           cout<<a[row_end][col]<<" ";
        }
        row_end--;
         for (int i = row_end; i <=row_start; i++)
        {
            cout<<a[i][column_start]<<" ";
        }
        column_start++;
    }
    
    return 0;
}