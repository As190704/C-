# include <iostream>
using namespace std;

void input(int x ,int y, int arr[20][20])
{
	cout<<"Enter the elements : ";
	for(int i=0;i<x;i++){
		for(int j=0;j<y;j++){
			cin>>arr[i][j];
		}
	}
}

void output(int x,int y, int arr[20][20])
{
	for(int i=0;i<x;i++){
		for( int j=0;j<y;j++){
			cout<<" "<<arr[i][j];
		}
		cout<<endl;
	}
}

void matmult(int r1,int c1,int r2,int c2,int a[20][20],int b[20][20],int m[20][20]){
	if(c1 != r2){
		cout<<"Matrix multiplication not possible .Columns of A must be equal to rows of B."<<endl;
		return;
	}
	
	for (int i=0;i<r1;i++){
		for(int j=0;j<c2;j++){
			m[i][j]=0;
			for(int k=0;k<c1;k++){
				m[i][j] += a[i][k]*b[j][i];
			}
		}
	}
}
 
 int main(){
 	int r1,c1,r2,c2;
 	int a[20][20],b[20][20],m[20][20];
 	
 	cout<<"Enter the number of rows of matrix A: ";
	cin>>r1;
	cout<<"Enter the number of column of matrix A: ";
	cin>>c1;
	cout<<"For matrix A: "<<endl;
	input(r1,c1,a);
	cout<<"The matrix A is: "<<endl ;
	output(r1,c1,a);
	
	cout<<"Enter the number of rows of matrix B : ";
	cin >>r2;
	cout<<"Enter the number of column of matrix B: ";
	cin>>c2;
	cout<<"For matrix B: "<<endl;
	input(r2,c2,b);
	cout<<"The matrix B is: "<<endl;
	output(r2,c2,b);
	
	matmult(r1,c1,r2,c2,a,b,m);
	
	if(c1 == r2){
		cout<<"The matrix multiplication of A and B gives the matrix : "<<endl;
		output(r1,c2,m);
	}
	return 0;
 }
