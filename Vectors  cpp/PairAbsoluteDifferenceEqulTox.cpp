//given a vector arr[] sorted in increasing order of n size and an integer x .
//find if there exist a pair in the array whose absolute difference is exactly x
#include<iostream>
using namespace std;
int main()
{
    int arr[]={5,10,15,20,25};
    int n = 5;
    int x = 10;
    int i = 0;
    int j = i+1;
    while(i < n && j < n)
    {
        if( abs(arr[i] -arr[j]) == x)
        {
            cout << "exist" ;
            break;
        }
        if(abs(arr[i] - arr[j] < x))
        {
            j++;
        }
        else{
            i++;
        }

    }

    return 0;
}