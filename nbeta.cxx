#include <iostream>
using namespace std;

int main() {
const int n = 8;
double arr[n] {-1.5,0.1,12,0,-2.2,0.5,-1,0.3};
double min;
double max;
                    //find min
for (int k = 0;k<=7;k++) {
 	if (arr[k]<min){
 		min=arr[k];
 }
}
                     //find max
for (int kb=0;kb<=7;kb++){
	if(arr[kb]>max){
		max=arr[kb];
		}	
}
                   //writeln array
cout<<endl;
for (int ka = 0;ka<=7;ka++){
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
