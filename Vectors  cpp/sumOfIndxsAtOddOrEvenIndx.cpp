// find the difference between th sum of elements at even indexes to the sum of elements at odd indices
#include<iostream>
#include<vector>
using namespace std;
int main()
{
    int odd , even , difference;
     odd = even = 0;
    vector <int> vec;
    cout << "enter elements in vector" << endl;
    for(int i = 0 ; i <6 ; i++)
    {
        int element;
        cin >> element ;
        vec.push_back(element);
    }
    for(int i = 0 ; i< vec.size() ; i++)
    {
        if( i%2 == 0)
        {
            even = even + vec[i];
        }
        else
        {
            odd = odd + vec[i];
        }
    }
    difference = odd - even ;
    cout <<  "the difference between the value at odd and even indexes is -> " << difference << endl ;
    return 0;
}