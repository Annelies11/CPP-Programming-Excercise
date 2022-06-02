#include <iostream>

using namespace std;

int main() {
	int arr[] = {1,2,3,4,5,6,7,8,9,10};
	int ukuran = sizeof(arr)/sizeof(arr[1]);
	cout<<"Ukuran array : "<<ukuran<<endl;
	int ukur = *(&arr + 1) - arr;
	cout<<"Ukuran array dengan pointer : "<<ukur<<endl;
	return 0;
}
