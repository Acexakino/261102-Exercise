#include<iostream>
using namespace std;

void printPattern1(int N,int M){
	if(N <= 0 || M <= 0){
		cout << "Invalid Input\n";
	}else{
		int x=0, k=0;
		for(int i=0; i<M; i++){
			for(int j=0; j<N; j++){
				if(N == M && (M%2 == 0 || N%2 == 0)){
					if(x%2 == 0){
						cout << 'O';
						x++;
						continue;
					}
					if(x%2 == 1){
						if(k%2 == 0){
							cout << 'X';
							x += 0;
						}else{
							cout << 'X';
							x++;
						}
						k++;
						continue;
					}
				}else{
					if(x%2 == 0) cout << 'O';
					if(x%2 == 1) cout << 'X';
				}
				x++;
			}
			cout << "\n";
		}
	}
}

int main(){
	printPattern1(2,2);
	cout << "\n";
	printPattern1(3,5);
	cout << "\n";
	printPattern1(5,3);
	cout << "\n";
	printPattern1(0,3);
	cout << "\n";
	printPattern1(7,-1);
	cout << "\n";
	return 0; 
}
