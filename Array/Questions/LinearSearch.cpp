/* C++_LinearSearch
You are given an array of integers and a target element x. Your task is to determine if the target element x is present in the given array. If the element is found, print "true", otherwise print "false"

Input
The first line contains an integer n (size of the array).

The second line contains n space-separated integers representing the elements of the array.

The third line contains an integer x (the target element to search for).

Output
Print "true" if the target element x is present in the array, otherwise print "false".

Example
Input:

5

1 2 3 4 5

3

Output:

true 

*/

#include<iostream>
using namespace std;
int main(){
    int n;
    cout<< " Enter the size of array: ";
    cin>>n;
    
    int arr[n];
    cout<<" Enter the elements of array: ";
    for (int i = 0; i <= n-1; i++)
    {
        cin>>arr[i];
    }
    int x;
    cout<<" Enter the target element to search for: ";
    cin>>x;

    bool flag = false;
    for (int i = 0; i <= n-1; i++)
    {
        if(arr[i] == x){
            flag = true;
            break;
        }
    }

    if(flag){
        cout<<"true";
    } else {
        cout<<"false";
    }

}