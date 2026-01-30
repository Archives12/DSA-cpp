/*
C++_MaximumElement
Write a C++ program to find the maximum and the second maximum elements in an array of integers. The program should prompt the user to enter the size of the array and its elements. If the array contains fewer than two distinct elements, the program should indicate that the second maximum cannot be found.

Input
The first line contains an integer n, the size of the array.

The second line contains n space-separated integers representing the elements of the array.

Output
The maximum element and the second maximum element, or a message indicating that the second maximum cannot be found.

Example
Input:

5

3 1 4 4 2

Output:

4 3

*/

#include<iostream>
#include<climits>
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
    int max = INT_MIN;
    int smax = INT_MIN;
    for (int i = 0; i <= n-1; i++)
    {
        if(max<arr[i]){
            max = arr[i];
        }
    }
    for (int i = 0; i <= n-1; i++)
    {
        if((max > arr[i]) && (smax < arr[i])){
            smax = arr[i];
        }
    }
    
    if(smax == INT_MIN){
        cout<<"The second maximum cannot be found.";
    } else{
        cout<< max << " " << smax;
    }
    return 0;
}