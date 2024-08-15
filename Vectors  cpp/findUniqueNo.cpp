#include<iostream>
#include<vector>
using namespace std;
int main()
{
    vector<int> vec;
    cout << "Enter value of element as " << endl;
    for(int i = 0 ; i < 7 ; i++)
    {
        int ele;
        cin >> ele;
        vec.push_back(ele);
    }
    for(int i = 0 ; i < vec.size() ; i++)
    {
        for(int j = i+1 ; j < vec.size(); j++)
        {
            if(vec[i] == vec[j] )
            {
                vec[i]=vec[j]=-1;           }
        }
    }
    
    for(int i = 0 ; i < vec.size() ; i++)
    {
        if(vec[i] > 0){
           cout << "our unique no is " << vec[i];
        }
    }
}