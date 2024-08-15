#include<iostream>
#include<vector>
using namespace std;
int main()
{
    int num,occurrence;
    occurrence=0;
    vector <int> vec;
    cout << "enter elements of a vec" << endl;
    for(int i = 0 ; i<6 ; i++)
    {
        int element;
        cin >> element;
        vec.push_back(element);
    }
    cout << "enter the num whose occurrence you want to find" << endl;
    cin >> num ;
    for(int i = 0 ; i< vec.size() ; i++)
    {
        if(vec[i] == num){
            occurrence++;
        }

    }
    cout << " the num of times this no occurr is " << occurrence << endl;
    return 0 ;
}