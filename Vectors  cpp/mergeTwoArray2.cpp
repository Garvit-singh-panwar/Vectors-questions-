// given two arr[] and arr2[] of size m and n sorted in increasing order. 
// merge the two array into a single array of size m + n
#include<iostream>
using namespace std;
int main()
{
    int m = 5;
    int n = 5;
    int arr1[ m ]={1,3,5,7,9};
    int arr2[ n ]={2,4,6,8,10};
    int result[ m + n];
    int i = 0;
    int j = 0;
    int k = 0;
    while( i < m && j < n)
    {
        if(arr1[i] < arr2[j]){
            result[k] = arr1[i];
            i++;
            k++;
        }
        else
        {
            result[k] = arr2[j];
            j++;
            k++; 
        }
    }
    while(i < m){
        result[k]=arr1[i];
        i++;
        k++;
    } 
    while(j < n){
        result[k]= arr2[j];
        k++;
        j++;
    }
    cout << "result after sorting : ";
for(int i = 0 ; i <(m+n); i++){
    cout << result[i] << " ";
}

    return 0;
}