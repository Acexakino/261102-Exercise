#include<iostream>
using namespace std;

void printPattern2(int N){
	if(N <= 0){
		cout << "Invalid Input\n";
	}else{
		for(int i=0; i<N; i++){
			for(int j=0; j<N; j++){
				if(j%N == 0) cout << 'O';
				else cout << 'X';
			}
		cout << "\n";
		}
	}
}

int main(){
	printPattern2(3);
	cout << "\n";
	printPattern2(4);
	cout << "\n";
	printPattern2(5);
	cout << "\n";
	printPattern2(0);
	cout << "\n";
	printPattern2(-1);
	cout << "\n";
}
