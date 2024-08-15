// find he second largest elemen in our array
#include<iostream>
#include<vector>
using namespace std;
int max(vector <int> vec , int size)
{
    int max;
    for(int i = 0 ; i < size; i++)
    {
        if(vec[i]>max)
        {
            max = vec[i];
        }
    }
  return max;
}
int main()
{
    vector <int> vec;
    cout << "Enter the value of elements in our vector " << endl;
    for(int i = 0; i < 6 ; i++)
    {
        int ele ;
        cin >> ele;
        vec.push_back(ele);

    } 
    int maxEle = max( vec, vec.size());

     for(int i = 0; i < vec.size(); i++)
    {
        if(vec[i]==maxEle)
        {
            vec[i]=-1;
        }
    }
     cout << " the second largest no in our array is " << max(vec , vec.size()) << endl; 
     return 0 ;
}
