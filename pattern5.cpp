/*
A A A A A----------------A
B B B B B----------------B
|  |    |   |   |   |   |
|  |    |   |   |   |   |
|  |    |   |   |   |   |
|  |    |   |   |   |   |
|  |    |   |   |   |   |
Z   Z   Z   Z   Z   Z   Z


*/

#include <bits/stdc++.h>
using namespace std;
void pattern(int ch)
{

    for (int j = 65; j <= 90; j++)
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