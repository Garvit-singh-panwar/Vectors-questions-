#include <iostream>
#include <vector>
using namespace std;
int main()
{ 
    vector <int> v1;
    cout << "size of vector is : " << v1.size() << endl;
    cout << "capacity of a vector : " << v1.capacity() << endl;
    v1.push_back(1);
    cout << "size of vector is : " << v1.size() << endl;
    cout << "capacity of a vector : " << v1.capacity() << endl;
    v1.push_back(2);
    cout << "size of vector is : " << v1.size() << endl;
    cout << "capacity of a vector : " << v1.capacity() << endl;
    v1.push_back(3);
    cout << "size of vector is : " << v1.size() << endl;
    cout << "capacity of a vector : " << v1.capacity() << endl;
    v1.push_back(4);
    cout << "size of vector is : " << v1.size() << endl;
    cout << "capacity of a vector : " << v1.capacity() << endl;
    cout << " value stored in a vector : ";
    for(int i = 0 ; i< v1.size() ; i++){
        cout << v1[i] << " ";
    }
    v1.resize(12);
    cout << endl << "size of vector after resizing : " << v1.size() << endl;
    cout << "capacity of a vector  after resizing : " << v1.capacity() << endl;
    v1.insert(v1.begin()+4 , 5);
    v1.insert(v1.begin()+5 , 6);
    v1.insert(v1.begin()+6 , 7);
    
    cout << " value stored in a vector using insert function : ";
    for(int i = 0 ; i< v1.size() ; i++){
        cout << v1[i] << " ";
    }
    cout<<endl;
    v1.pop_back();
    v1.pop_back();
    cout << " value stored in a vector using pop_back function : ";
    for(int i = 0 ; i< v1.size() ; i++){
        cout << v1[i] << " ";
    }
    cout << endl;
    v1.erase(v1.begin()+5);
    v1.erase(v1.begin()+5);
    cout << " value stored in a vector using erase function  in 6 , 7 position : ";
    for(int i = 0 ; i< v1.size() ; i++){
        cout << v1[i] << " ";
    }
    cout << endl;
    v1.clear();
    cout << " value stored in a vector using clear function : ";
    for(int i = 0 ; i< v1.size() ; i++){
        cout << v1[i] << " ";
    }
    cout << endl;


    return 0;
}