#include <iostream>
using namespace std;

int main() {
int n;
int m;
//____________
int HP = 100;
int Enemy = 100;
//____________
cout<<"enter number 1 or 2"<<endl;
cin>>n;
switch (n){
	case 1:
		cout<<"select your class :"<<endl;
		cout<<"1 - bowSkeleton "<<endl;
		cout<<"2 - warrior"<<endl;
		cin>>m;
		switch (m){
			case 1:
				cout<<"1-1";
				break;
			case 2:
				cout<<"1-2";
				break;
		}
		break;
	case 2:
			switch (m){
			case 1:
				cout<<"2-1";
				break;
			case 2:
				cout<<"2-2";
		break;
			}
}
return 0;
}