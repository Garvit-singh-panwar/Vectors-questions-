#include<iostream>
#include<vector>
using namespace std;
int main()
{
    vector <int> vec;
    cout << "Enter elements of a vector " << endl;
    int arr[7];
    for(int i = 0; i < 7 ; i++)
    {
        int ele;
        cin >> ele;
        arr[i]=ele;
        vec.push_back(ele);

    }
     cout  << "value is in our vector is " << endl;
    for(int i = 0; i < vec.size() ; i++)
    {
        cout << vec[i] << " " ;
        for(int j = i+1 ; j < vec.size() ; j++ )
        {
            if(vec[i]==vec[j])
            {
                arr[i] = arr[j] = -1;
            }
        }
    } 
   
    for (int i = 0; i < vec.size(); i++)
    {
        if(arr[i] > 0)
        {
            cout << "our unique value is : " << arr[i];
        }
    }
    
    return 0;
}