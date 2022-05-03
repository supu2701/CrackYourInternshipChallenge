#include<iostream>
using namespace std;
int main() {
double n;
cin>>n;
double f=1;
    for(int i=1;i<=n;i++){
        f=f*i;
    }



cout<<"Factorial of Given Number is ="<<f<<endl;
	return 0;
}