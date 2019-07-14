#include <iostream>
using namespace std;

int main() {
	//_______________
cout<<"arr= ? : ";
int k;
int b;
int s =0;
cin>>b;
cout<<"\n\n";
int arr[b];
for (int a =0;a<b;a++){
	cin>>k;
	arr[a]=k;
	s+=arr[a];
}
cout<<"\n\t sum= "<<s;
return 0;
} 