#include <iostream>
using namespace std;

int main() {
    float arr[4][4] = {
    	{1.1,1.2,1.3,1.4},
    	{2.1,2.2,2.3,2.4},
    	{3.1,3.2,3.3,3.4},
    	{4.1,4.2,4.3,4.4}
    	 };
for (int a =0;a<4;a++){
	for (int b=0;b<4;b++){
		cout<<arr[a][b]<<" ";
	}
	cout<<endl;
}
    return 0;
}