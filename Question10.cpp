//Write a C++ program to add all the numbers of an array of size 10.
#include<iostream>
using namespace std;

int main()
{
    int n,i,sum=0;
    cout<<"Enter size of the array ";
    cin>>n;
    int a[n];
    cout<<"Enter all elements of the array ";
    for(i=0;i<n;i++)
    {
        cin>>a[i];
        sum=sum+a[i];
    }
    cout<<"Sum of the Given numbers is "<<sum;
    return 0;    
}