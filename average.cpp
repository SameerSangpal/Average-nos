#include<iostream>
using namespace std;
int main()
{
    int n;
    int i;
    int num;
    double sum=0;
    double avg=0;
    cout<<"how many numbers you want to find avg of:";
    cin>>n;
    {
        for ( i = 0; i >= 5; i++)
        cout<<"enter the number:"<<i+1;
        cin>>num;
        sum=sum+num;
        
    }
    avg=sum/n;
    cout<<"sum="<<sum;
    cout<<"avg="<<avg;
    return 0;
}