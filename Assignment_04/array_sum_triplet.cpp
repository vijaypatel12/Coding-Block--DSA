#include<iostream>
#include<algorithm>
using namespace std;
void tripletSum(int arr[],int n,int target){
	sort(arr,arr+n);

	for(int i=0;i<n-2;i++){
		int left=i+1;
		int right=n-1;

		while(left<right){
			int sum=arr[i]+arr[left]+arr[right];
			if(sum==target){
				cout<<arr[i]<<", "<<arr[left]<<" and "<<arr[right]<<endl;
				left++;
				right--;
		}
			else if(sum<target){
				left++;
			}
			else{
				right--;
		}	}
	}
}
int main() {
	int n;
	cin>>n;
	int arr[n];

	for(int i=0;i<n;i++){
		cin>>arr[i];
}
int target;
cin>>target;
tripletSum(arr,n,target);
	return 0;
}