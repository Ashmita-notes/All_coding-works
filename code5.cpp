#include<iostream>
class Student{
	private:
	   int mark;
	public:
		Student(int x){
			mark = x;
		}
		friend void pass(Student m);
};

void pass(Student m){
	if(m.mark> 40)
	std::cout<<"Congratulation, you have passed "<<std::endl;
else
    std::cout<<"Sorry, you have failed"<<std::endl;
}
int main(){
	
	Student o1(4);
	pass(o1);
	return 0;
}
