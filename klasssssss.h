#include <iostream> 
#include <clocale> 
using namespace std; 
int main() 
{ 
setlocale(LC_ALL, "Rusian"); 
const int n =10; 
int a[n]= {1,3,-15,1,-2,1,-1,30,8,4}; 
int imax=0, imin=0, count=0; 
for (int i=0; i<10; i++) 
{ 
if (a[i]>a[imax]) imax=i; 
if (a[i]<a[imin]) imin=i; 
} 
cout<<"\n Максимум = "<<a[imax]<<"  Минимум = "<<a[imin]; 
int ibeg = imax<imin ? imax : imin; 
int iend = imax<imin ? imin : imax; 
cout<<"\n ibeg = "<< ibeg <<"  iend = "<<iend; 
for (int i=ibeg+1; i<iend; i++) 
{ 
if (a[i]>0) 
count++; 
} 
cout << endl; 
cout<<"Количество положительных: " << count << endl; 
return 0; 
}