#include<iostream>
#include<algorithm>
using namespace std;

int main()
{
    int n;
    int sum=0;
    int k=0;
    int c=0;

    cin>>n;

    int coin[n];

    for(int i=0;i<n;i++){
        cin>>coin[i];

        sum+=coin[i];
    }

    sort(coin,coin+n,greater<int>());

    for(int j=0;j<n;j++)
    {
        k+=coin[j];
        c++;
        if(sum-k<k){
            break;
        }

    }

    cout<<c;

    
    return 0;
    

}