#include<iostream>
using namespace std;

template <typename T>
void swap(T d[], int x, int y){
	T temp = d[x];
	d[x] = d[y];
	d[y] = temp;
}

template <typename T>
void selectionSort(T d[], int N){
	int min;
	for(int i = 0; i < N-1; i++){
		min = i;
		for(int j = i+1; j < N; j++){
			if(d[j] < d[min]) min = j;
		}
		swap(d,min,i);	
	}
}

template <typename T>
void show(T d[], int N){
	for(int i=0; i<N; i++){
		cout << d[i] << " ";
	}
	cout << "\n";
}

int main(){
	int d[] = {64,25,12,22,11};
	int N = sizeof(d)/sizeof(d[0]);
	selectionSort(d,N);
	cout << "Sorted array: ";
	show(d,N);
	cout << "\n";
	return 0;
}
