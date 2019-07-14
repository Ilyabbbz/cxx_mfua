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
cout<<"\n\n\n\n\t";
for (int a=0;a<n;a++){
	cout<<"["<<arr[a]<<"] ";
}
return 0;
}