#include<iostream>
using namespace std;

class Operator {
// friend ostream& operator << (ostream&, Operator);
// friend istream& operator >> (istream&, Operator);

	public:
		long faktorial();
		long faktorial(int n);
		
	private:
		int n;
	
};

long Operator::faktorial() {
	int n = 6;
	long fak=1;
	for (int i=1; i<=n; i++)	{
		fak = fak * i;
	}
	return fak;
};

long Operator::faktorial(int n)	{
	if (n == 0 || n==1) {
		return (1);
	} else {
		return (n*faktorial(n-1));
	}
};

int main()	{
	Operator run;
	cout<<run.faktorial();
	cout<<endl;
	cout<<run.faktorial(7);
	return 0;
}
