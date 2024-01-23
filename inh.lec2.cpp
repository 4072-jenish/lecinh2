#include<iostream>
using namespace std;

class RBI{
	
	public:
		
		void ROI(){
			int n;
	
			cout << "Enter persantage : "<<endl;
	        cin>>n;
			cout<< "rate of intres is"<<n<<endl;	
		}
};

class SBI : public RBI
{
	public:
};

class BOB: public RBI
{
	public:
};

class ICICI : public RBI
{
	public:
};
int main(){
	
	ICICI i1;
	SBI s1;
	BOB b1;
	

	i1.ROI();
	
}


