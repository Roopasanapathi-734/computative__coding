<<<<<<< HEAD
#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int candles[n];
    for(int i=0;i<n;i++)
    {
        cin>>candles[i];
    }
    int max=candles[0];
    for(int i=0;i<n;i++)
    {
        if(candles[i]>max)
        {
            max=candles[i];
        }
    }
    int count=0;
    for(int i=0;i<n;i++)
    {
        if(candles[i]==max)
        {
            count++;
        }
    }
    cout<<count;
    return 0;
}
=======
#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int candles[n];
    for(int i=0;i<n;i++)
    {
        cin>>candles[i];
    }
    int max=candles[0];
    for(int i=0;i<n;i++)
    {
        if(candles[i]>max)
        {
            max=candles[i];
        }
    }
    int count=0;
    for(int i=0;i<n;i++)
    {
        if(candles[i]==max)
        {
            count++;
        }
    }
    cout<<count;
    return 0;
}
>>>>>>> 39127ef4f00ef4cb86f26bcab87f63f0e8f05ef9
