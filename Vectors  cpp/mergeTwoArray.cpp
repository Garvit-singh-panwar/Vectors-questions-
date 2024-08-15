// given two arr[] and arr2[] of size m and n sorted in increasing order. 
// merge the two array into a single array of size m + n
#include<iostream>
#include<vector>
using namespace std;
void sortedMergeArr(vector < int> &arr ,vector < int> &arr2 ,vector < int> &merge)
{
 int first = 0;
 int second = 0;
 while ( first < arr.size() && second < arr2.size()   )
 {
    if(arr[first] < arr2[second]){
        merge.push_back(arr[first]);
        first++;
    }
    else
    {
        merge.push_back(arr2[second]);
        second++;
    }
 }
while(first < arr.size())
{
     merge.push_back(arr[first]);
        first++;
}
while(second < arr2.size())
{
    merge.push_back(arr2[second]);
        second++;
}
   
 
  for(int i = 0 ; i < merge.size() ; i++)
    {
        cout << merge[i] << " " << endl;
    }


}
int main()
{
    vector <int> arr;
    vector <int> arr2;
    int n;
    cout << "Enter length of array " << endl;
    cin >> n;
    cout << "Enter elements of array1" << endl;
    for(int i = 0; i < n ; i++)
    {
        int ele;
        cin >> ele;
        arr.push_back(ele);
    }
    cout << "Enter elements of array2" << endl;
    for(int i = 0; i < n ; i++)
    {
        int ele;
        cin >> ele;
        arr2.push_back(ele);
    }
    vector <int> merge;
    cout << "Elements of merged sorted array is " << endl;
    sortedMergeArr(arr , arr2 , merge);
   
    return 0;
}