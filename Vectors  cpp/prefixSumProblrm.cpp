// given an integer array 'a' ,
//  return the prefix sum / running sum in the same array wihout creating a new array
#include <iostream>
#include <vector>
using namespace std;
void prefixSum(vector<int> &v)
{
    for (int i = 1; i < v.size(); i++)
    {
        // instead of using another for loop we can also do
        // v[i] +=v[i-1];
        for (int j = i - 1; j < i; j++)
        {
            v[i] = v[j] + v[i];
        }
    }
}
int main()
{
    vector<int> v;
    int n;
    cout << " enter he length og the array " << endl;
    cin >> n;
    cout << endl
         << " enter elements of array " << endl;
    for (int i = 0; i < n; i++)
    {
        int ele;
        cin >> ele;
        v.push_back(ele);
    }
    prefixSum(v);
    cout << endl << " array afer prefix sum  :" << endl;
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }

    return 0;
}