#include<iostream>
#include<cstdlib>
#include<ctime>
using namespace std;

int main(){
	srand(time(0));
	int N;
	do{
		cout << "Input N = ";
		cin >> N;
		if(N > 1) break;
		if(N <= 1) cout << "invalid input\n";
	}while(true);
	
	int x = rand()%N + 1, prob, i;
	do{
		if(prob)
		i++;
	}while(i != N);
	
	
	/*100	1
	50		2
	25		3
	12.5	4
	6.25	5
	3.125	6
	1.625	7
	0.8125	8
	*/
}
