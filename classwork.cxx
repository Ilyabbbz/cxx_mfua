#include <iostream>
using namespace std;

int main() {
	int a=0;
	int b=0;
    int arr[4][4] = {
    	{1,2,3,4},
    	{2,3,4,5},
    	{3,4,5,6},
    	{4,5,6,7}
    	 };
for(int k=0;k<=3;k++){
	cout<<arr[a][b] ;
	b++;
}
a+=1;
cout<<endl;
for(int k=0;k<=3;k++){
	cout<<arr[a][b] ;
	b++;
}
cout<<endl;
a+=1;
for(int k=0;k<=3;k++){
	cout<<arr[a][b] ;
	b++;
}
    return 0;
}