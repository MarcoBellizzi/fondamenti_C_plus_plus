
#include <iostream>
using namespace std;

int main() {
	bool condizione=false;
	char prec,corr;
	cin>>prec;
	if(prec=='*')
		cout<<"NO";
	else
	{
		cin>>corr;
		while(corr!='*')
		{
			if(corr>='A' && corr<='Z' && prec>='A' && prec<='Z')
				condizione=true;
			if(corr>='a' && corr<='z' && corr==prec)
				condizione=true;
			prec=corr;
			cin>>corr;
		}
		if(condizione)
			cout<<"SI";
		else
			cout<<"NO";

	}
	return 0;
}