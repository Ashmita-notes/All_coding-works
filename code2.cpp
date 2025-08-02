#include<iostream>
class nB;
class nA{
	private:
	int numA;
	public:
		nA(){
			numA = 10;
		}
		friend void add(nA,nB);
};
class nB{
	private:
		int numB;
	public:
		nB(){
			numB=20;
		}
		friend void add(nA,nB);
};

void add(nA objA, nB objB){
	int sum = objA.numA+objB.numB;
	std::cout<<"Sum of two number is  "<<sum<<std::endl;
}
int main(){
	nA objA;
	nB objB;
	add(objA, objB);
	return 0;
}
