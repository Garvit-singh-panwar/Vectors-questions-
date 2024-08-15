// find the difference between th sum of elements at even indexes to the sum of elements at odd indices
#include<iostream>
#include<vector>
using namespace std;
int main()
{
    int difference = 0;
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
           difference += vec[i];
        }
        else
        {
           difference -= vec[i];
        }
    }
    cout <<  "the difference between the value at odd and even indexes is -> "  << difference << endl ;
    return 0;
}