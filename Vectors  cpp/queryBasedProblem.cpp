// given an array of integer size n 
// answer q queries where you need to print the sum of values in a given range of indices from l to r
// NOTE : the values of l and r in query follow 1-based indexing
#include<iostream>
#include<vector>
using namespace std;
int main()
{
    vector <int> vec;
    int n;
    cout << " enter length of a vector " << endl;
    cin >> n;
    cout << endl << " enter elements of vector" << endl;

    for(int i = 0 ; i < n ; i ++ )
    {
        int ele;
        cin >> ele;
        vec.push_back(ele);
    }
    int prefix = 0;
    vector <int> storePrefix;
    for(int i = 0 ; i < vec.size() ; i++)
    {
        prefix += vec[i];
        storePrefix.push_back(prefix);
    }
    int queryNo , l , r ;
    cout << "Enter no of queries" << endl;
    cin >> queryNo;
    while(queryNo--)
    {
        cout<< "Enter Value of L : " ;
        cin >> l;
        cout<< "Enter value of R : " ;
        cin >> r;
        cout << "Sum of values between l and r : " << storePrefix[r-1] - storePrefix[l-1]  << endl;
    }

return 0;
}