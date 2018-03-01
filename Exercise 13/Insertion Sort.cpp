#include<iostream>
using namespace std;

template <typename T>
void swap(T d[],int x,int y){
	T temp = d[x];
	d[x] = d[y];
	d[y] = temp;
}

template <typename T>
void insertionSort(T d[],int N){
	for(int i = 0; i < N; i++){
		for(int j = i; j >= 0 && d[j] < d[j+1]; j--){
			swap(d,j,j+1);
		}
	}
}

template <typename T>
void show(T d[],int N){
	for(int i=0; i < N; i++) cout << d[i] << " ";
	cout << "\n";
}

int main(){
	int d[] = {20,25,7,40,1};
	int N = sizeof(d)/sizeof(d[0]);
	cout << "Before sorting: ";
	show(d,N);
	insertionSort(d,N);
	cout << "After sorting: ";
	show(d,N);
	return 0; 
}
