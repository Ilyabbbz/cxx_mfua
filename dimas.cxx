#include <iostream>
#include <cstdlib>
#include <ctime>
#include <unistd.h>
using namespace std;

class Array {
    public:
        int arrA[5];
        int arrB[5];
        void ArrA() {
        cout<<"Array generated\n";
        srand(time(0));
        for (int a=0 ; a<5 ; a++) {
        
        arrA[a] =-10 + rand() % 10;
        }
        for(int each: arrA){
        	cout<<each<<" ";
    }    
        };
    void ArrB() {
        cout<<"Array generated\n";
        srand(time(0));
        for (int a=0 ; a<5 ; a++) {
            //cin>>c;
            arrB[a]=-10 + rand()% 10;
    }    
    for(int each: arrB){
        	cout<<each<<" ";
    }    
};
};

class Out{
	private:
	  Array a;
    public:
    Out()
    {
    	a.ArrA();
    	sleep(0.01);
    	a.ArrB();
    cout<<endl;
    for (int z=0; z<5; z++){
    cout<<"["<<a.arrA[z]<<"] ";
        }
    cout<<endl;
    for (int z=0; z<5; z++){
    cout<<"["<<a.arrB[z]<<"] ";
        }
    }
};
class Compare: public Array{
    public:
    Compare()
    {
        int kA=0;
        int kB=0;
        for (int a=0; a<5; a++){
            if (arrA[a]>0){
                kA++;
            }
            if (arrB[a]>0){
                kB++;
            }
        }
        cout<<kA<<" "<<kB<<endl;
        if (kA==kB){
            cout<<"arr1=arr2";
        }
        else if (kA>kB){
            cout<<"arr1>arr2";
        }
        else{
            cout<<"arr1<arr2";
        }
    }
};
int main() {
int k = 1;
Array a;
while (k!=0){
    cout<<"\n\n1)Arr1\n2)Arr2\n3)Out\n4)Compare\n0)Exit()"<<endl;
    cin>>k;
    switch (k){
        case 1:
            a.ArrA();
            break;
        case 2:
            a.ArrB();
            break;
        case 3:
            Out();
            break;
        case 4:
            Compare();
            break;
        case 0:
            cout<<"Exit()";
        default:
            cout<<"not found";
            break;
    }
}
return (0);
}
