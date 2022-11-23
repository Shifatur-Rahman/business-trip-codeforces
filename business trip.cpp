#include <bits/stdc++.h>
using namespace std;
int main(){

int k, i, sum2, sum, count;
cin>>k;
int arr[100];
sum2 = 0;
for(i=0; i<12; i++){
	cin>>arr[i];
	sum2 += arr[i];
}
sum = 0;
count = 0;
sort(arr, arr+12);

if(sum2<k){
	cout<<-1<<endl;
}
else if(k==0){
	cout<<0<<endl;
}

else{
for(i=11; i>=0; i--){
	sum+=arr[i];
	count++;
	if(sum>=k){
		break;
	}

}
cout<<count<<endl;
}
}
