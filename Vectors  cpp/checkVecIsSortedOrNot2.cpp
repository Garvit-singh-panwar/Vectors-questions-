// check if the given array is sorted or not
#include<iostream>
#include<vector>
using namespace std;
int main()
{
    vector <int>  vec ;
    cout << " enter elements of a vector" << endl ;

    for(int i = 0 ; i < 6 ; i++)
    {
        int element;
        cin >> element; 
        vec.push_back(element);

    }
    bool sortedflag = true ;
    for(int i =1 ; i < vec.size(); i++)
    {
         if (vec[i] <= vec[i-1])
         {
            sortedflag = false ;
         }
    }
    cout << sortedflag << endl;
    return 0;
}