#include <iostream>
#include <string>
#include<cstring>
using namespace std;
 
int main(){
	char x[105], y[105];
	cin >> x >> y;
	cout<<strcmp(strlwr(x), strlwr(y));
}