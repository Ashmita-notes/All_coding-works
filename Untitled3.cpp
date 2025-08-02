#include<iostream>
using namespace std;
int main(){
	int arr[5],max;
	cin>>arr[0];
	max = arr[0];
	for(int i=0;i<5;i++){
		cin>>arr[i];
		if(arr[i]>max)
		max = arr[i];
	}
	cout<<"Max = "<<max<<endl;
	return 0;
}
