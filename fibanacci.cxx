#include <iostream>
using namespace std;

int main() {
cout<<"\t Enter a fibanacci number: ";
int q;
int b=3;
cin>>q;
cout<<endl<<endl;
int arr[q];
arr[0]=1;
arr[1]=1;
cout<<"1)"<<arr[0]<<endl;
cout<<"2)"<<arr[1]<<endl;
for (int a=2;a<q;a++){
	arr[a]=arr[a-2]+arr[a-1];
	cout<<b<<")"<<arr[a]<<endl;
	b++;
}
return 0;
} 