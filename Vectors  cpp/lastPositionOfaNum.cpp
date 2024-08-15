//find the last position of a number num; 
#include<iostream>
#include<vector>
using namespace std;
int main()
{
    vector <int> vec(10);
    cout << vec.size() << endl;
    cout << vec.capacity() << endl;
cout << " enter elements into of a vector " << endl ;
    for(int i=0 ; i < 10 ; i++)
    {
        int element; 
        cin >> element;
        vec.push_back(element);
    }
    int num,indx;
    cout << " find last position of a num  "<< endl;
    cout << "enter a number that you want to find" << endl ; 
    cin >> num;

    for(int i = 0; i<vec.size()  ; i++)
    {
        if(vec[i]==num)
        {
            indx = i;
        }
    }
    cout << "last position of num is "<< indx  << endl;
    cout << "check no is this  "<< vec[indx]  << endl;
    return 0 ;
}