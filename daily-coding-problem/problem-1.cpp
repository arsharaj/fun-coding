#include<bits/stdc++.h>
using namespace std;
void solution();
int main()
{
    int test_cases = 1;
    cin >> test_cases;

    while(test_cases--)
    {
        solution();
        cout << "\n";
    }

    return 0;
}

void solution()
{
    int size, key;
    vector<int> num_list;
    cin >> size;
    for(int i = 0; i < size; i++)
    {
        int temp;
        cin >> temp;
        num_list.push_back(temp);
    }
    cin >> key;
    for(int i = 0; i < size-1; i++)
    {
        for(int j = 1; j < size; j++)
        {
            if(num_list[i] + num_list[j] == key)
            {
                cout << "True" << endl;
                return;
            }
        }
    }
    cout << "False" << endl;
}
