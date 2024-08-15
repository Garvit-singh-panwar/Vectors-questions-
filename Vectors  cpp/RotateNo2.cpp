#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main()
{
    vector<int> vec={1,2,3,4,5};
    int k = 0;
    cout << "how many times you want to reverse " << endl;
    cin >> k ;
    k = k%vec.size();
    // reverse function is in algorithm hadder thats why we include this hadder
    reverse(vec.begin(), vec.end());
    // firet it swap full array 54321
    reverse(vec.begin() , vec.begin()+k);
    // then we swap 54 to 45
    reverse(vec.begin()+k,vec.end());
    // then we swap 321 to 123
    for(int a : vec)
    {
        cout << a << " ";
    }
    return 0;
}