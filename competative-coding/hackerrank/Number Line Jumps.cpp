<<<<<<< HEAD
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int x1,v1,x2,v2;
    cin>>x1>>v1>>x2>>v2;
    for(int i=0;i<10000;i++){
        if(x1==x2){
            cout<<"YES"<<endl;
            return 0;
        }
        x1+=v1;
        x2+=v2;
        if((x1>x2 && v1>=v2)||(x2>x1 && v2>v1)){
            cout<<"NO"<<endl;
            return 0;
        }
    }
    cout<<"NO"<<endl;
    return 0;
}
=======
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int x1,v1,x2,v2;
    cin>>x1>>v1>>x2>>v2;
    for(int i=0;i<10000;i++){
        if(x1==x2){
            cout<<"YES"<<endl;
            return 0;
        }
        x1+=v1;
        x2+=v2;
        if((x1>x2 && v1>=v2)||(x2>x1 && v2>v1)){
            cout<<"NO"<<endl;
            return 0;
        }
    }
    cout<<"NO"<<endl;
    return 0;
}
>>>>>>> 39127ef4f00ef4cb86f26bcab87f63f0e8f05ef9