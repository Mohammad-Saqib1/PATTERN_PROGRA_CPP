/*

Print like this type for n numbers
1 2 3 4 5----------(n-1) n
1 2 3 4 5----------(n-1) n
1 2 3 4 5----------(n-1) n
1 2 3 4 5----------(n-1) n
| | | | ---------| | | | |
| | | | ---------| | | | |
| | | | ---------| | | | |
1 2 3 4 5----------(n-1) n



*/

#include <bits/stdc++.h>
using namespace std;
void pattern1(int n)
{
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            cout << j << " ";
        }
        cout << endl;
    }
}
int main()
{
    int n;
    cout << "Enter the size of pattern" << endl;
    cin >> n;
    pattern1(n);
    return 0;
}