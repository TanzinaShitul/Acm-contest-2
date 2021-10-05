#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a, b,count_1 = 0,count_2 = 0;
    cin >> a >> b;
    int arr[a];
    for(int i = 0; i < a; i++)
    {
        cin >> arr[i];
        if(arr[i] <= b)
        {
            count_1++;
        }
        else
        {
            count_2 += 2;
        }
    }
    cout << count_1 + count_2;
}
