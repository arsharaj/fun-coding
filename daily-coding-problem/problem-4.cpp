#include<bits/stdc++.h>
using namespace std;
void solution();
int main()
{
    int test_cases = 1;
    cin >> test_cases;    
    while(test_cases--){
        solution();
        cout << "\n";
    }
    return 0;
}

void solution()
{
    int n;
    char my_list[100];
    int r, g, b;
    r = g = b = 0;
    cin >>  n;
    for(int i = 0; i < n; ++i)
    {
        cin >>  my_list[i];
        switch(my_list[i])
        {
            case 'R':
                ++r;
                break;
            case 'G':
                ++g;
                break;
            case 'B':
                ++b;
                break;
            default:
                cout << "Input Error";
        }
    }
    while(r)
    {
        printf("R ");
        r--;
    }
    while(g)
    {
        printf("G ");
        g--;
    }
    while(b)
    {
        printf("B ");
        b--;
    }
}