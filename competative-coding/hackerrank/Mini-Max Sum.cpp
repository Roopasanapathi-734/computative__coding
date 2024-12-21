<<<<<<< HEAD
#include<iostream>
using namespace std;
int main()
{
    int n=5;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    long long total=0;
    for(int i=0;i<n;i++)
    {
        total+=arr[i];
    }
    int min=arr[0];
    int max=arr[0];
    for(int i=0;i<n;i++)
    {
        if(arr[i]<min)
        {
            min=arr[i];
            
        }
        if(arr[i]>max)
        {
            max=arr[i];
        }
    }
    cout<<total-max<<" "<<total-min;
    return 0;
}
=======
#include<iostream>
using namespace std;
int main()
{
    int n=5;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    long long total=0;
    for(int i=0;i<n;i++)
    {
        total+=arr[i];
    }
    int min=arr[0];
    int max=arr[0];
    for(int i=0;i<n;i++)
    {
        if(arr[i]<min)
        {
            min=arr[i];
            
        }
        if(arr[i]>max)
        {
            max=arr[i];
        }
    }
    cout<<total-max<<" "<<total-min;
    return 0;
}
>>>>>>> 39127ef4f00ef4cb86f26bcab87f63f0e8f05ef9
