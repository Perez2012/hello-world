#include <iostream>

using namespace std;

int main()
{
    int a,b=2,i=2;
    cout<<"Please enter a number:";
    cin>>a;
    if(a<b){
        cout<<"Numbers less than 2 are not considered as prime numbers since prime numbers start from 2"<<endl;
    }

        if(a%i==0){
            cout<<a<<"is not a prime number";
        }
        else if(a%i==1){
            cout<<a<<"is a prime number";

        }

    return 0;
}
