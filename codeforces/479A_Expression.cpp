#include<iostream>
using namespace std;

int main()
{
    int res1=0;
    int res2=0;
    int res3=0;
    int res4=0;
    int res5=0;
    
    int a;
    int b;
    int c;
    
    cin>>a;
    cin>>b;
    cin>>c;

    res1=a+b*c;
    res2=a*(b+c);
    res3=a*b*c;
    res4=(a+b)*c;
    res5=a+b+c;

    // if(res1>res2 && res1>res2 && res1>res3 && res1>>res4)
    // {
    //     cout<<res1;
    // }
    // else

    cout<<max(max(max(max(res1,res2),res3),res4),res5);



    return 0;
}