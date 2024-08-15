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
    int sorted = 1 ;
    for(int i = 1 ; i < vec.size() ; i++){


        if (vec[i] <= vec[i-1])
        {
            sorted = 0;
            break;
        } 
    }
    if(sorted == 1){
        cout << " This is a sorted array "<<endl;
    }
    else{
        cout << " this is not a sorted array "<< endl;
    }

    return 0;
}