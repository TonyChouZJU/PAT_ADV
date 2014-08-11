#include <iostream>

using namespace std;

int main(){
	char c;
	int sum=0;
	while(cin>>c)
		sum+=c-'0';
	int dig_length=0;
	int a[5];
	int higher,lower;
	const char *s[] = {"zero","one","two","three","four","five","six","seven","eight","nine"};
	do{
		higher = sum/10;
		lower = sum%10;
		a[dig_length] = lower;
		++dig_length;
		sum = higher;
	}while(higher != 0);
	
	for(int i = 0; i != dig_length; ++i)
		if( i ==0)
			cout <<s[a[dig_length-i-1]];
		else	
			cout <<" "<<s[a[dig_length-i-1]];
	cout << endl;
		
}
