#include<iostream>
#include<math.h>
#include<vector>
using namespace std;
int main()
{
    int n = 6;
    cout <<" enter elements " << endl;
    vector <int> vec;
    for(int i = 0 ; i < n ; i++)
    {
        int element ;
        cin >> element;
        vec.push_back(element);
    }
    int const N = 1e5 + 10;
    vector<int> frequency(N,0);
    for(int i = 0 ; i < n; i++ )
    {
        frequency[vec[i]]++;
    }
    int query;
    cout << " enter no of query yoiu give "<< endl;
    cin >> query;
    cout << "Enter queryElement "<<endl;
    while(query--)
    { 
        int queryEle;
        cin >> queryEle;
       cout<< frequency[queryEle]<<endl;

    }
    return 0 ;
}