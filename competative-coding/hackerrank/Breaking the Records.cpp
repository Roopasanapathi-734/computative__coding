<<<<<<< HEAD
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    vector<int>scores(n);
    for(int i=0;i<n;i++)
    {
        cin>>scores[i];
    }
    int min,max;
    min=scores[0];
    max=scores[0];
    int minc=0,maxc=0;
    for(int i=0;i<n;i++)
    {
        if(scores[i]>max)
        {
            max=scores[i];
            maxc++;
        }
        if(scores[i]<min)
        {
            min=scores[i];
            minc++;
        }
    }
    cout<<maxc<<" "<<minc<<endl;
}
=======
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    vector<int>scores(n);
    for(int i=0;i<n;i++)
    {
        cin>>scores[i];
    }
    int min,max;
    min=scores[0];
    max=scores[0];
    int minc=0,maxc=0;
    for(int i=0;i<n;i++)
    {
        if(scores[i]>max)
        {
            max=scores[i];
            maxc++;
        }
        if(scores[i]<min)
        {
            min=scores[i];
            minc++;
        }
    }
    cout<<maxc<<" "<<minc<<endl;
}
>>>>>>> 39127ef4f00ef4cb86f26bcab87f63f0e8f05ef9
