#include<iostream>
#include<vector>
using namespace std;
int secondMaxNo(int arr[] , int size)
{
    int max = 0; 
    int secondMax = 0;
    for(int i = 0 ; i < size; i++)
    {
        if(arr[i] > max)
        {
            max = arr[i];
        }
    }

    for(int i = 0 ; i < size; i++)
    {
        if(arr[i] > secondMax && arr[i] !=max)
        {
            secondMax = arr[i];
        }
    }
    return secondMax;  
}
int main()
{
    int arr[7];
    cout << " enter elements in a vector " << endl;
    for(int i = 0 ; i < 7 ; i++)
    {
       cin >> arr[i];
    }
    int size = 7;
    cout <<"the second largest no in our array is "<< secondMaxNo(arr, size);
    return 0;
}

