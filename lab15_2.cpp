#include<iostream>
using namespace std;

const int N = 5;

void inputMatrix(double [][N]);

void findLocalMax(const double [][N], bool [][N]);

void showMatrix(const bool [][N]);

int main(){
	double A[N][N]; 
	bool B[N][N]; 
	cout << "Input the matrix.....\n";
	inputMatrix(A);
	findLocalMax(A,B);
	cout << "Result is \n";
	showMatrix(B);
	return 0;
}

void showMatrix(const bool x[][N]){
	for(int i=0;i<N;i++){
		for(int j=0;j<N;j++){
			cout << x[i][j] << " ";
		}
		cout << "\n";
	}
}

void inputMatrix(double x[][N]){
	for(int i=0;i<N;i++){
		cout << "Row " << i+1 << ": ";
		for(int j=0;j<N;j++){
			cin >> x[i][j];
		}
		
	}
}

void findLocalMax(const double x[][N], bool y[][N]){
	for(int i=0;i<N;i++){
		for(int j=0;j<N;j++){
			if(i==0 or j==0){
				y[i][j]=0;
			}if(i==N-1 or j==N-1){
				y[i][j]=0;
			}
			if(x[i+1][j+1]>=x[i][j+1] and x[i+1][j+1]>=x[i+2][j+1] and x[i+1][j+1]>=x[i+1][j+2] and x[i+1][j+1]>=x[i+1][j]){
				y[i+1][j+1]=1;
			}else{
				y[i+1][j+1]=0;
			}	
		}
		
	}
	
}
