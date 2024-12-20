#include <iostream>
using namespace std;
#include <iomanip>
int main(){
const int n=6;
int vargu_temp[n];
cout<< "jepmi temp per 6 ditet e fundit\n\n";
for (int i = 0; i < n; i++)
{
    cout<<"jepni temp per diten "<<i+1<< ":";
    cin>> vargu_temp[i];
}

for (int i = 0; i < n; i++)
{
 cout<< "dita "<<i+1<<"me temp"<< setw(5)<<setfill(' ')<<"*C ka qene";
 
 if (vargu_temp[1]>20)
 {
    cout<<"e ngrohet";
 }
 else{
cout<<"e ftohte ";

 }
}









}