//given an integer array "a" sorted in non decreasing order ,
// return an array of the squares of each number sorted in non-decreasing order;
#include<iostream>
#include<vector>
using namespace std;
void sortedSquaredArray( vector <int > v)
{
    vector<int> ans;
    int left = 0;
    int right = v.size()-1;
    while(left < right)
    {
        if(abs(v[left]) > abs(v[right]))
        {
            ans.push_back(v[right]*v[right]);
        right--;
        }
        else{
            ans.push_back(v[left]*v[left]);
        left++;
        }
    }
    for(int i = 0 ; i<v.size(); i++)
    {   cout << ans[i] <<" ";

    }

}
int main()
{
    int n;
    cin >> n ;
    vector <int> v; 
    for(int i=0 ; i<n; i++){
        int ele;
        cin >> ele;
        v.push_back(ele);

    }
    sortedSquaredArray(v);
    
    return 0 ;
}