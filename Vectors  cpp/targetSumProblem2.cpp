// count the number of triplets whose sumis equal to the given value x
#include<iostream>
#include<vector>
using namespace std;
int main()
{
    vector<int> vec;
    for(int i = 0 ; i < 10 ; i++)
    {
        int element ; 
        cin >> element ;
        vec.push_back(element);

    }

    int num , pairs = 0;
    cout << "Enter a number to count the number of triplets whose sumis equal to the given value x " << endl;
    cin >> num ; 
    for(int i = 0 ; i<vec.size();i++)
    {
        for (int j = i+1 ; j < vec.size() ;j ++ )
        {
            for(int k = j+1 ; k<vec.size(); k++)
            {
                if(vec[i]+vec[j]+vec[k]== num)
                {
                    cout << "indx " << i << " + " <<  "indx " << j << " + " <<  "indx " << k << " = " << num << endl;
                    cout << "value at these index is " <<vec[i] << " + " << vec[j] << " + "<<  vec[k] <<" = " << vec[i] + vec[j] + vec[k] << endl; 
                    pairs++;
                }
            }
        }
    }
    cout << "no of pairs : " << pairs;
    return 0 ;
}