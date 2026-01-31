// Count the number of elements in given array greater than a given number x.

#include <iostream>
using namespace std;
int main(){
    int n;
    cout << "Enter the size of the array ";
    cin>>n;
    int arr[n];
    cout<< "Enter the elements: ";
    for (int i = 0; i <= n-1; i++)
    {
        cin>> arr[i];
    }

    int x;
    cout<< "Enter the element: ";
    cin>>x;

    int count=0;

    for (int i = 0; i <= n-1; i++)
    {
        if(arr[i] > x){
            count++;
        }
    }
    
    cout<< count;

}