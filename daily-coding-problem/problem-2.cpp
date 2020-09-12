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
    int size;
    vector<int> num_list;
    cin >> size;
    for(int i = 0; i < size; i++)
    {
        int temp;
        cin >> temp;
        num_list.push_back(temp);
    }
    vector<int> prod_list;
    for(int i = 0; i < size; i++)
    {
        int product = 1;
        for(int j = 0; j < size; j++)
        {
            if(i == j) continue;
            product *= num_list[j];
        }
        prod_list.push_back(product);
    }
    for(int i = 0; i < size; i++)
    {
        cout << prod_list[i] << " ";
    }
    cout << endl;
}
