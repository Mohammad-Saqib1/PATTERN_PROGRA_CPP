/*
Z   Z   Z   Z   Z   Z   Z
|  |    |   |   |   |   |
|  |    |   |   |   |   |
|  |    |   |   |   |   |
|  |    |   |   |   |   |
|  |    |   |   |   |   |

B B B B B----------------B
A A A A A----------------A



*/

#include <bits/stdc++.h>
using namespace std;
void pattern(int ch)
{

    for (int j = 90; j>=65; j--)
    {
        for (int i = 1; i <= ch; i++)
        {
            cout << char(j) << " ";
        }
        cout << endl;
    }
}
int main()
{
    int ch;
    cout<<"Enter your column number "<<endl;
    cin>>ch;
    pattern(ch);
    return 0;
}