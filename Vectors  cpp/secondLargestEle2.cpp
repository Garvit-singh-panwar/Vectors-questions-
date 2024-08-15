#include<iostream>
#include<vector>
using namespace std;
int maxIndx(vector <int> vec)
{
    int maxIndx;
    cout << "enter element of our vector " << endl;
    for(int i = 0 ; i<vec.size() ; i++)
    {
        if(vec[i+1] > vec[i])
        {
            maxIndx=i+1;
        }
    }
    return maxIndx;
}
int main()
{
    vector<int> vec;
    for(int i = 0 ; i < 6 ; i++){
        int ele;
        cin >> ele;
        vec.push_back(ele);
    }
    int maxNoIndx = maxIndx(vec);
    // if we get largest no in pair we can eliminae hem using for loop
    // so we can get the second largest no
    for(int i = 0 ; i < vec.size() ; i++){
        if(vec[i] == vec[maxNoIndx] ){
            vec[i]=-1;
        }
    }
    
    maxNoIndx = maxIndx(vec);
    cout << "second largest no in our vector : " << vec[maxNoIndx] << endl;
    return 0;
}