#include<iostream>

using namespace std;

int main()
{
    int lim,bob;

    cin >>lim>>bob;
    

    for(int i=1;i<=10;i++)
    {
        lim=lim*3;
        bob=bob*2;

        if(lim>bob){
            cout<<i<<endl;
            break;
        }
    }

    return 0;
}