#include<iostream>
using namespace std;

int main()
{
    int n = 5,sum=0;
    int avg=0;
    int arr[n] = {2,6,1,5,3};
    for(int i = 0;i<n;i++)
    {
        sum += arr[i];
    }
    avg = sum/n;
    cout<<"Average of the list is: ";
    cout<<avg;
}