#include<iostream>
class B;
class A{
	private:
	int numA;
	public:
		A(){
			numA = 10;
		}
		friend void add(A,B);
};
class B{
	private:
		int numB;
	public:
		B(){
			numB=20;
		}
		friend void add(A,B);
};

void add(A objA, B objB){
	int sum = objA.numA+objB.numB;
	std::cout<<"Sum of two number is  "<<sum<<std::endl;
}
int main(){
	A objA;
	B objB;
	add(objA, objB);
	return 0;
}
