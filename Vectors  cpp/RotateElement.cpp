//Rotate the given array "a" by k steps where k is non-negaive.
//Note: k can be greater than n as well  where n is the size of array 'a' 
 #include<iostream>
 using namespace std;
 int main()
 {
    int array[]={1,2,3,4,5};
    int n = 5;
    int k = 2;
    int rotate[5];
    int j = 0;
    cout << " Enter how mant times you want to rotate " << endl;
    cin >> k ; 
    k = k%n;
    for(int i = n-k; i < n ; i++)
    {
        rotate[j] = array[i];
        j++;
    }
    for(int i = 0; i < n-k ; i++)
    {
        rotate[j] = array[i];
        j++;
    }
    for(int i = 0 ; i < n ; i++)
    {
       cout <<  rotate[i];
    }
    return 0;
 }