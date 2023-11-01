#include<bits/stdc++.h>
using namespace std;

bool check(vector<int>&arr,double distance,int k){

	double last_pos = arr[0];
	int count = 0;
	int rest = 0;

	for(int i = 1; i<arr.size();i++){
		double diff =((last_pos+(double)arr[i])/2.0)-last_pos;
		if(count == k){
			rest++;
			continue;
		}
		if(distance <= diff){
			count++;
		}
		last_pos =arr[i];
	}
	if(count >rest)return true;
	else return false;
}
double minimiseMaxDistance(vector<int> &arr, int k){
	// Write your code here.	

	int n = arr.size();
	double low = 0.1;
	double high =arr[0];
	double ans = -1;


	
	for(double i = low; low <= 1.0;){

		if(check(arr,i,k)){
			ans = i;
		}else{
			break;
		}
		i+=0.1;
	}
	return ans;
}

int main(){
    vector<int> arr={1 ,2 ,3 ,4 ,5,6,7,8,9,10};
    cout << minimiseMaxDistance(arr, 1);
    return 0;
}