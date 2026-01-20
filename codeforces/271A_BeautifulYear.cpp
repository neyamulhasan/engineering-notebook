#include<iostream>
#include<string>

using namespace std;
bool check(int n)
{
    int x,y;

    while(n!=0){
        x=n%10;
        y=n/10;
        while(y!=0){
            if(y%10==x){
                return false;
            }
            else
            y=y/10;

        }
        n=n/10;

    }

    return true;

}
int main()
{

    int n;

    
    cin>>n;

    n++;

    for(int i=n ;i<=9021;i++)
    {

        bool c = check(i);

        if(c==true){
            cout<<i;
            return 0;
        }
        


    }
    

}