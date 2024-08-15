// sort an array consisting of zeros and one
#include <iostream>
#include <vector>
using namespace std;
int main()
{
    int n;
    vector<int> vec;
    cout << " enter size of a vector " << endl;
    cin >> n;
    cout << " enter elements of a vector" << endl;
    for (int i = 0; i < n; i++)
    {
        int ele;
        cin >> ele;
        vec.push_back(ele);
    }
    int left_ptr, right_ptr;
    left_ptr = 0;
    right_ptr = vec.size() - 1;
    while (left_ptr < right_ptr)
    {
        if (vec[left_ptr] == 1 && vec[right_ptr] == 0)
        {
            vec[left_ptr] = 0;
            vec[right_ptr] = 1;
            left_ptr++;
            right_ptr--;
        }
        else if (vec[right_ptr] == 1)
        {
            right_ptr--;
        }
        else if (vec[left_ptr] == 0)
        {
            left_ptr++;
        }
    }
    cout << "our sorted vec :  " << endl;
    for (int a : vec)
    {
        cout << a << " ";
    }

    return 0;
}