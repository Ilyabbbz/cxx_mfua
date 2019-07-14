#include <iostream>
#include <ctime>
using namespace std;
class rsp {
	public:
		string r="rock";
		string s="scissor";
		string p="paper";
		string v=" vs ";
		string w="\n\tyou win";
		string l="\n\tyou lose";
		string d="\n\tdraw";
		string def="\n\tplease repeat";
		int b;
};
class randb: public rsp{
	public:
	randb(){
		b=1+(rand()%3);
	}
};
class rock: public rsp {
	public:
	rock()
	{
		randb();
		switch(b) {
			case 1:
				cout<<r<<v<<r<<d;
				break;
			case 2:
				cout<<r<<v<<s<<w;
				break;
			case 3:
				cout<<r<<v<<p<<l;
				break;
			default:
				cout<<"please repeat again";
		}
	}
};
class scission: public rsp {
	public:
	scission()
	{
	 cout<<s<<v;
	 switch(b){
	 	case 1:
	 		cout<<r<<l;
	 		break;
	 	case 2:
	 		cout<<s<<d;
	 		break;
	 	case 3:
	 		cout<<p<<w;
	 		break;
	 	default:
	 		cout<<def;
	 		break;
	 }
	}
};
class paper: public rsp{
	public:
	paper()
	{
	cout<<p<<v;
	switch(b){
		case 1:
			cout<<r<<w;
			break;
		case 2:
			cout<<s<<l;
			break;
		case 3:
			cout<<p<<d;
			break;
		default:
			cout<<def;
			break;
	}
	}
};
int main() {
int a = 1;
while (a!=0){
	cout<<"1)rock\n2)scissor";
	cout<<"\npaper";
	cout<<"\n0)exit"<<endl;
	cin>>a;
    switch (a){
    	case 1:
    		rock();
    		break;
    	case 2:
    		scission();
    		break;
    	case 3:
    		paper();
    		break;
    	default:
    		cout<<"please,enter 1,2 or 3;";
    		break;
    }
}
return 0;
} 