//count the number of element strictly greater than value
#include<iostream>
#include<vector>
using namespace std;
int main()
{
    int num,greaterNo = 0 ;
    vector <int> vec ;
    cout << "enter the elements" << endl;
    for(int i = 0 ; i < 6 ; i++)
    {
        int element ; 
        cin >> element ;
        vec.push_back(element);
    }
    cout << "enter the number to to count all the no greater than this no" << endl;
    cin >> num;
    for(int i = 0 ; i < vec.size() ; i++)
    {
        if(vec[i] > num)
        {
            greaterNo++;
        }
    }
    cout << "count of greater no are : " << greaterNo << endl ; 
    return 0;

}