#include<iostream>
using namespace std;

int main(){
    int arr[] ={1,4,6,7,11};
    int* ptr = arr;
    for (int i = 0; i <= 4; i++)
    {
        cout<< *ptr << " ";
        ptr++;          //moves to the next element. It doesn't implify addition.
    }
    cout<<endl;
    ptr = arr; //Pointer points to the first element
    ptr[0] = 8; //Modifying the value of first element
    ptr++; // Now, the pointer points to the second element
    ptr[0] = 9; //Modifying the value of the second element
    ptr--; //Now, the pointer points back to the first element

     for (int i = 0; i <= 4; i++)
    {
        cout<< *ptr << " ";
        ptr++;  
    }
    
    ptr = arr; // Pointer points to the first element.
    
}