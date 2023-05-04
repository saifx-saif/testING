#include<bits/stdc++.h>
using namespace std;

int main()
{
	string name,pass;
	cin>>name>>pass;
	if(name=="admin" && pass=="admin")cout<<"Log in successful\n";
	else cout<<"Invalid user\n";
}

