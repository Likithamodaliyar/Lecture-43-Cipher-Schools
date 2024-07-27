//insertion sort

#include <iostream>
using namespace std;

int main(){
	cout<<"Enter 4 elements: ";
	int a[4];
	int i,j;
	for(i=0;i<4;i++){
		cin>>a[i];
	}
	int key;
	for(j=1;j<4;j++){
		key = a[j];
		i=j-1;
		
		while(a[i]>key && i>=0){
			a[i+1] = a[i];
			i--;
		}	
		a[i+1] = key;
	}
	
	for(i=0;i<4;i++){
		cout<<a[i]<<" ";
	}
	return 0;
}
