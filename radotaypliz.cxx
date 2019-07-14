#include <iostream>
using namespace std;

class Array {
	public:
		int arr[5];
};

class Arr: public Array{
	public:
		Arr()
		{
		int c;
		cout<<"Arr?";
	//int arr[5];//{1,2,4,5,7};
		for (int a=0 ; a<5 ; a++) {
			cin>>c;
			arr[a]=c;
	}    
	//пасхалка для Deemon
}
};
class Out: public Array{
	public:
	Out()
	{
	for (int z=0; z<5; z++){
			cout<<arr[z]<< " ";
		}
	}

};
int main() {
	//_________
int k = 1;
while (k!=0){
cout<<"\n\n\tVibiray, \n1)Arr\n2)??\n3)pokazat'Arr"<<endl;
cin>>k;
switch (k){
	case 1:
		Arr();
		break;
	case 2:
		cout<<"\n\tSeryznoо?";
		break;
	case 0:
	cout<<"vot i poigrali";
	break;
	case 3:
	Out();
	break;
	default:
	cout<<"takogo chisla nerzhan blya";
	break;
	
}
}
return (0);
