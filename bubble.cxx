#include <iostream>
using namespace std;

int main() {
int n; //Кол-во эл-тов
cout<<"\t Введите кол-во эл-тов : ";
cin >>n;
int t;
int arr[n];
for (int a=0;a<n;a++){
	cin>>t;
	arr[a]=t;
} 
int k;
int b=0;
//sort; k-
while (b!=n-1){
	if (arr[b]>arr[b+1]){
		k=arr[b];
		arr[b]=arr[b+1];
		arr[b+1]=k;
		b++;
		b=0;
	}
	else {
		b++;
	}
}
cout<<"\n\n\n\n\t";
for (int a=0;a<n;a++){
	cout<<"["<<arr[a]<<"] ";
}
return 0;
}