//given an array sorted in increasing order of size n and an integer x, 
//find if there exists a pair in the array whose sum is exactly x
#include<iostream>
using namespace std;
int main()
{   
    int m =8;
    int arr[m]={-2 ,-1 ,0 ,3 ,6 ,8 ,11 ,12};
    int x=14;
    int i = 0;
    int j = m-1;
    bool check = false;
    while (i < m)
    {
        if(arr[i] + arr[j] == x) {
             check = true;
             break;
        }
        if(arr[i] + arr[j] < x)
        {
            i++;
        }
        if(arr[i] + arr[j] > x)
        {
            j--;
        }
    }
    if(check == true){
        cout << "exist" << endl;
    }
    else{
        cout << "not exist" << endl;
    }
    return 0;
}