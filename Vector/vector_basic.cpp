#include <iostream>
#include<vector>

using namespace std;
int main(){
    vector <int> v; // you don't need to mention the size. A 0 size array is formed.

    //inserting/input donot use []. When you are not given the size of array.

    v.push_back(6); // size of array is 1
    v.push_back(9);
    v.push_back(1);
    v.push_back(0); 
    

    // we can't enter the elements of array using v[0]. This will throw an error. But we can update / access.

    v[0] = 88;

    cout<<v[0]<<" ";
    cout<<v[1]<<" ";
    cout<<v[2]<<" ";
    cout<<v[3]<<" ";

}