#include<iostream>
/*
    vectors are dynamic arrays 
    means we can resize as we need 
    we can insert or delete element according to our need it is not necessary to initialize the size of array in vectorn 
    arrays are static in nature we can not insert or delete elements
    to use vectors we we have to include a hader file name vector #include <vector>
*/
#include <vector>
using namespace std;

int main()
{
    // to initalise a vector we have to write vector <datatype> vectorname;
    vector <int> V;
    // however if you want to specify the size the vector or array we have to write vector <datatype> vectorname (size);
    vector <int> V1(2) ;
    //if we want to check size of our array we have to use a function size Vectorname.size();
    V1.size();
    // if we want to resize our array we have to use a function resize vectorname.resize(size);
    V1.resize(3);
    // capacity 
    //capacityof a vector is more than or equal to the size when we add vectors our capicity also increases
    // using capacity function function we can see how much memory is allocated to our vector in memory
    V1.capacity();
    // if i want to add elements in a vector we have to use a function vectorname.push_back(element);
    //it insertes element after last inserted element
    V1.push_back(40);
    // if we want to insert a element on some certain position er use a function insert
    // vectorname.insert(position , element)
    // to find the position we use a function begin or end
    // foe ex if i want to store a element on the 3rd position i have to write
    //vectorname.insert(vectorname.begin()+2 , element)
    // if i want to store a element in the 3rd last position we have to write
    // vectorname.insert(vectorname.end()-3 , element);
    V1.insert(V1.begin()+1 , 24);
    V1.insert(V1.begin()+2 , 74);
    // if we want to delete a element we have to use a function vectorname.pop_back();
    // it delets the element stored in the last position;
    V1.pop_back();
    // if we want to delete element stored in certain position we have to use a function 
    //vectorname.erase(position);
    V1.erase(V1.begin());
    // if we want all the elements of our vector er have to write a function
    // vectorname.clear();
    
    return 0 ;
}