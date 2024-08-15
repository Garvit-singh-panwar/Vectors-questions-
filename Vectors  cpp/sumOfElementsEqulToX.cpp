//given an array sorted in increasing order of size n and an integer x, 
//find if there exists a pair in the array whose sum is exactly x
#include<iostream>
#include<vector>
using namespace std;
void pairOfSumExist( vector <int> arr ,int x){
    int pair = 0;
    for(int i = 0; i < arr.size() ; i++  )
    {
        for(int j = i+1 ; j < arr.size() ; j++){
            if(arr[i]+ arr[j] == x) {
                
                pair ++;
            }
        }

    }
   
    if(pair == 0)
    {
        cout << " not exist "  << endl;
    }
    else
    {
        cout << "There are " << pair << " pair exist" << endl; 
    }

}
int main()
{   

    vector <int> arr = {0 , 2 ,2 ,4,5};
    int x = 0;
    cout << "Enter whose pair you want to find" << endl;
    cin >> x;
    pairOfSumExist(arr , x );

    return 0;
}