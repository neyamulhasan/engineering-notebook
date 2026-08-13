#include<iostream>

using namespace std;

int main ()
{

    long long int num1;
    long long int num2;


	cin>>num1;
    cin>>num2;

	for(int i=0;i<num2;i++){

		if(num1%10==0){
			num1/=10;
		}

		else {
			num1-=1;
		}
	
    }
	
	
	cout<<num1;



    return 0;
}