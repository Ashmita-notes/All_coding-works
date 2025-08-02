#include<iostream>
class ca{
	private:
	   float radius;
	public:
		ca(float x){
			radius = x;
		}
		friend void area(ca r);
};

void area(ca r){
	int a = 3.14*r.radius*r.radius;
	std::cout<<"area of the circle  "<<a<<std::endl;
}
int main(){
	
	ca o1(2.4);
	area(o1);
	return 0;
}
