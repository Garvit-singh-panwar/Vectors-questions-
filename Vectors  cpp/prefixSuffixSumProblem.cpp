// check if we can partition the array into two sub array with equal sum.
// more formally , check tha the prefix sum of a part of the array is equal to the suffix sum of rest of the array.
// prefix sum means el element k pehle jitne bhi element ho un sb ka sum or sufix sum means ek element k bad jitne bhi element ho un sb ka sum
#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector <int > vec;
    int n;
    cout << " enter length of array " << endl;
    cin >> n;
    cout << endl<< "Enter elements of array " << endl;
    for(int i = 0 ; i < n ; i++)
    {
        int ele;
        cin >> ele;
        vec.push_back(ele);

    }
    int prefix = 0 ; 
    int suffix = 0 ; 
    for(int i = 0 ; i < vec.size() ; i++)
    {
        for(int j = i+1 ; j < vec.size() ; j++)
        {
            suffix += vec[j] ;
        }
        prefix += vec[i];
        if(prefix  == suffix)
        {
            cout << " prefix is form 0 to " << i << " suffix is from " << i+1 << " to "<< vec.size()-1 << " index"  << endl;
            break ; 
        } 
        suffix = 0;
    }
    if(prefix != suffix)
    {
        cout << " no sub arrays are equal " << endl;
    }
   


    return 0;
}