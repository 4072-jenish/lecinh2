#include<iostream>
using namespace std;

class A{
	
	public:
		
		void sum(){
			int n;
	
			cout << "Enter number : "<<endl;
	        cin>>n;
			cout<< "rate of intres is"<<n<<endl;	
		}
};

class B : public A
{
	public:
	void sum1(){
		
			int n;
	
			cout << "Enter number : "<<endl;
	        cin>>n;
			cout<< "rate of intres is"<<n<<endl;	
		}
	
};

class C: public A
{
	public:
	void sum2(){
			int n;
	
			cout << "Enter number : "<<endl;
	        cin>>n;
			cout<< "rate of intres is"<<n<<endl;	
		}

};

class D: public A
{
	void sum3(){
			int n;
	
			cout << "Enter number : "<<endl;
	        cin>>n;
			cout<< "rate of intres is"<<n<<endl;	
		}
	public:
};
class E: public B,public C,public D
{
	B b1;C c1;D d1;E e1;
	b1.sum1();
	c1.sum
	
	public:
		
 }; 
int main(){
	
}


