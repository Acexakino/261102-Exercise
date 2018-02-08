#include<iostream>
using namespace std;

int main(){
	int num,min;
	while(min > 0){
		cout << "Input number: ";
		cin >> num;
		if(num < min) min = num;
	}
	if(num <= 0){
		cout << "Minimum = N/A";
	}else{
		cout << "Minimum = " << min;
	}
	return 0;
}
