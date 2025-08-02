#include<iostream>
class Sq{
	private:
	   int side;
	public:
		Sq(int x){
			side = x;
		}
		friend void area(Sq s);
};

void area(Sq s){
	int a = s.side*s.side;
	std::cout<<"square of the number:  "<<a<<std::endl;
}
int main(){
	
	Sq o1(5);
	area(o1);
	return 0;
}
