#include <iostream>

using namespace std;

int main(int argc, char** argv) {
	int num;
	bool check = false;
	cout<<"Enter number here:  \n";
	cin>>num;
			for(int i=2; i<num; i++){
		if(num%i == 0){
			check = true;
				
				break;
			}
	}
			if(check == false && num>1){
				cout<<"This number is prime\n";
			
			}else{
				cout<<"This Number is not prime\n";
			}
			
		return 0;
			}
		


		 


