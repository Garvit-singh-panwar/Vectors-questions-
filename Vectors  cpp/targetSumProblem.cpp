// pattern targetsum :
// find the total number of pairs in the array whose sum is equal to the given value x
#include<iostream>
#include<vector>
using namespace std;
int main()
{  
    vector <int > vec;
    cout << "enter the element " << endl ;
    for(int i = 0 ; i < 6 ; i++)
    {
        int element;
        cin >> element ;
        vec.push_back(element);
    }
    int num;
    cout << "find the total number of pairs in the array whose sum is equal to the given value x" << endl << endl ;
    cout << "Enter the Number x " << endl;
    cin >> num ; 
    int pairs = 0;
    for(int i = 0 ; i < vec.size() ; i++)
    {
        for(int j  = i+1 ; j < vec.size() ; j++)
        {
            if(vec[i]+vec[j] == num)
            {
                cout << "indx " << i << " + " <<  "indx " << j << " = " << num << endl;
               cout << "value at these index is " <<vec[i] << " + " << vec[j] << " = " << vec[i] + vec[j] << endl; 
                pairs++;
            }

        }

    }
    cout << endl << "no of pairs : " << pairs << endl;
    return 0;
}
