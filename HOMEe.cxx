#include <iostream>
using namespace std;

int main() {
const int n = 5;
int arr[n] {1,-6,4,-1,7};
int min;
int max;
                    //find min
for (int k = 0;k<=4;k++) {
 	if (arr[k]<arr[k+1]){
 		min=arr[k];
 }
}
                     //find max
for (int kb=0;kb<=4;kb++){
	if(arr[kb]>arr[kb+1]){
		max=arr[kb];
		}	
}
                   //writeln array
cout<<endl;
for (int ka = 0;ka<=4;ka++){
	if (arr[ka]>0){
		arr[ka]=max;
	}
	else {
		arr[ka]=min;
	}
 	cout<<arr[ka]<<"|";
 }
 cout <<endl<<"min = "<<min<<endl;
 cout <<"max = "<<max;
return 0;
}
