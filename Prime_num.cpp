#include<iostream>
using namespace std;

int main()
{
    int num,flag;
    cout<<"Enter the number: ";
    cin>>num;
    
    for(int i=2;i<=num;i++)
    {
        if(num % i == 0)
        {
            flag = 1;
            break;
        }
        
        else if(num % i !=0)
        {
            flag = 0;
            break;
        }
    }
    
    if(flag == 0)
    {
        cout<<"Its a prime number!";
    }
    else if(flag == 1)
    {
        cout<<"Not a prime number!";
    }
    
    return 0;
}