#include<iostream>
#include<ctime>
#include<cstdlib>
#include<cmath>
using namespace std;

int main(){
	srand(time(0));
	int x = rand()%100 + 1; 
	int y = (rand()%12 + 1)*2;
	int z = rand()%10 - 5;
	int w = pow(2,rand()%10 + 1);
	cout << x << "\n"; 
	cout << y << "\n"; 
	cout << z << "\n";
	cout << w;
	return 0;
}
