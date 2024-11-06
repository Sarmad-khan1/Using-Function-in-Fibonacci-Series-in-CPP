#include <iostream>
using namespace std;
void fibonacciseries(int n1, int n2, int n3);
int main()
{
	int n1 = 0;
	cout << "Enter first number: " << endl;
	cin >> n1;

	int n2 = 0;
	cout << "Enter second Number: " << endl;
	cin >> n2;

	int n3 = 0;
	cout << "Enter the third number: " << endl;
	cin >> n3;

	fibonacciseries(n1, n2, n3);
	// int receiveFS;
	// receiveFS = fibonacciseries(n1, n2, n3);
	// cout << receiveFS << endl;

	return 0;
}
void fibonacciseries(int n1, int n2, int n3)
{
	for(int i=0; i<n3; i++ )
	{
	int next=n1+n2;
	n1=n2;
	n2=next;
	cout<<next<<" ";
		
	}
	
}