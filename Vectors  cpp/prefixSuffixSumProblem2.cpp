// check if we can partition the array into two sub array with equal sum.
// more formally , check tha the prefix sum of a part of the array is equal to the suffix sum of rest of the array.
// prefix sum means el element k pehle jitne bhi element ho un sb ka sum or 
// sufix sum means ek element k bad jitne bhi element ho un sb ka sum
#include<iostream>
#include<vector>
using namespace std;
bool prefixSuffix(vector <int> &v)
{
    int totalsum = 0;
    for(int i = 0; i < v.size() ; i++)
    {
        totalsum += v[i];
    }
    int prefixSum = 0;
    for(int i =0; i<v.size(); i++)
    {
        prefixSum +=v[i];
       int suffixSum = totalsum - prefixSum;
       if(prefixSum == suffixSum)
       {
         return true;
       }
    }
    return false;
}
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

   cout <<  prefixSuffix(vec) << endl;
    return 0;
}