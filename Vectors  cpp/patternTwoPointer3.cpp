// given a array of integer "a" move all the even integer at begining of the array followed by all odd intiger the relative order of odd or even integer does not matter . return any array that satisfies the condition
#include<iostream> 
#include<vector>
using namespace std;
int main()
{
    int n;
    cout << " enter length of the array " << endl;
    cin >> n;
    cout << "enter value of elements" << endl;
    vector <int> vec;
    for(int i = 0; i < n; i++)
    {
        int ele;
        cin >> ele;
        vec.push_back(ele);
    }
    int left_ptr = 0;
    int right_ptr = vec.size()-1;
    while(left_ptr < right_ptr)
    {
        if(vec[left_ptr] %2 != 0 && vec[right_ptr] %2 == 0 )
        {
            // vec[left_ptr]=vec[left_ptr]+vec[right_ptr];
            // vec[right_ptr]=vec[left_ptr]-vec[right_ptr] ;
            // vec[left_ptr]=vec[left_ptr]-vec[right_ptr];
           
            // or we can also do 
                swap( vec[left_ptr] , vec[right_ptr] );
                // its an inbuilt function for swaping
        
            
            left_ptr++;
            right_ptr--;
        }

        if(vec[left_ptr] %2 == 0)
        {
            left_ptr++;
        }
        if(vec[right_ptr] %2 !=0)
        {
            right_ptr--;
        }
        
    }
    cout << "elements of array after sorting" << endl;
    for(int i:vec)
    {
        cout << i << " ";
    }

    return 0;
}