#include <iostream>
#include <cmath>
using namespace std;

template <typename T>
void insertionSort(T d[],int N){
	for(int end = 1; end<N ; end++){
		for(int x=end; x>0;x--){
			if(d[x]>d[x-1]){
				double key = d[x];
				d[x] =d[x-1];
				d[x-1]=key;
			}
		}
		cout << "Pass " << end << ":" ;
		for(int e=0;e<N;e++){
			cout << d[e] << " ";
		}
		cout << "\n";
	}
}

int main(){
	int a[10] = {12,25,30,44,2,0,4,7,55,25};
	cout << "Input Array:";
	for(int i = 0; i < 10; i++) cout << a[i] << " ";
	cout << "\n\n";
	
	insertionSort(a,10);
	
	cout << "\nSorted Array:";
	for(int i = 0; i < 10; i++) cout << a[i] << " ";	
}

