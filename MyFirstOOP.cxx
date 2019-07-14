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
	for (int z=0 ; z<5;z++){
			cin>>j;
			arr[z]=j;
		}

};
int main() {
	//_________
int k;
while (k!=0){
cout<<"\n\n\tВыбирай, \n1)Arr\n2)??\n3)pokazat'Arr"<<endl;
cin>>k;
switch (k){
	case 1:
		Arr();
		break;
	case 2:
		cout<<"\n\tсерье́зно?";
		break;
	case 0:
	cout<<"вот и поиграли";
	break;
	default:
	cout<<"такого числа неЕржан бля";
	break;
	case 3:
	Out();
}
}
return (0);
}