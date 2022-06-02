#include <iostream> 
//#define max 100

using namespace std;

int main() {
	const int max=100;
	int arr[max];
	int n, i, j, a, c, salah;
	int simpen;
	
	do{
		salah=0;
		cout<<"Masukkan banyak elemen yang akan disorting : ";
		cin>>n;
		if(n<0||n>max){
			cout<<"Input yang anda masukkan salah!\nSilakan masukkan nilai lagi"<<endl;
			salah=1;
	}
	} while (salah==1);
	for(i=0;i<n;i++) {
		cout<<"Data ke ["<<i+1<<"] =";
		cin>>arr[i];
	}
	cout<<"Array sebelum di sorting : ";
	for(c = 0; c<n; c++) {
		cout<<arr[c]<<"  ";
	}
	
	for(i=0; i<n; i++) {
		for(j=i+1; j<n; j++) {
			if(arr[i]>arr[j]){
				simpen=arr[i];
				arr[i]=arr[j];
				arr[j]=simpen;
			}
		}
	}
	cout<<endl;
	cout<<"Array setelah di sorting : ";
	for(i=0; i<n; i++) {
		cout<<arr[i]<<"  ";
	}
	return 0;
}
