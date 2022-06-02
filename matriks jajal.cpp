#include<iostream>

using namespace std;

void decMatrix(int bigger[][4], int smaller[][4], int n) {
	int i, j;
	for(i=0;i<n;i++) {
		for(j=0;j<n;j++) {
			cout<<bigger[i][j]-smaller[i][j]<<" ";
		}
		cout<<endl;
	}
}
void sumMatrix(int source1[][4], int source2[][4], int n) {
	int i, j;
	for(i=0;i<n;i++) {
		for(j=0;j<n;j++) {
			cout<<source1[i][j]+source2[i][j]<<" ";
		}
		cout<<endl;
	}
}
void showMat(int a[][4], int n) {
	int i, j;
	for(i=0;i<n;i++) {
		for(j=0;j<n;j++) {
			cout<<a[i][j]<<" ";
		}
		cout<<endl;
	}
}
int main() {
    int mat1[4][4] = {{1,1,1,1},
					{1,1,1,1},
					{1,1,1,1},
					{1,1,1,1}};
	int mat2[4][4] = {{2,2,2,2},
					{2,2,2,2},
					{2,2,2,2},
					{2,2,2,2}};
	int mat3[4][4] = {{3,3,3,3},
					{3,3,3,3},
					{3,3,3,3},
					{3,3,3,3}};
					
	
   showMat(mat1,4);
   cout<<endl;
   showMat(mat2,4);
   cout<<endl;
   showMat(mat3,4);
   cout<<endl;
   sumMatrix(mat3, mat2, 4);
   cout<<endl;
   decMatrix(mat3, mat1, 4);
   return 0;
}
