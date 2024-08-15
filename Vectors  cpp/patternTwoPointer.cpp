//sort an array consisting of only 0's and 1's
#include<iostream>
#include<vector>
using namespace std;
int sortZerosAndOnes(vector<int> &v)
{
    int zeros = 0;
    for(int ele: v)
    {
        if(ele == 0)
        {
            zeros++;
        }
    }
    for(int i =0 ; i < v.size(); i++)
    {
        if( i < zeros)
        {
            v[i]=0;
        }
        else
        {
                v[i]=1;
        }
        
    }
}
int main()
{
    vector<int> arr;
    
    cout<< "Enter value of ele as 0 and 1 only" << endl;
    for(int i = 0 ;i < 6 ; i++)
    {
        int ele;
        cin >> ele;
        arr.push_back(ele);
    }
 sortZerosAndOnes( arr);
    for(int a:arr){
        cout << a << " ";
    }
    return 0;
}