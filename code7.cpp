#include<iostream>
class Number1{
	private:
	   int number1;
	public:
		Number1(){
			number1 = 10;
		}
		friend void compare(Number1,Number2);
};
class Number2{
	private:
	int number2;
	public:
		Number2(){
			number2 = 20;
        }
};
void compare(Number1 obj_N1, Number2 obj_N2){
	if(obj_N1.Number1 > obj_N2.Number2)
	cout<<" "<<obj_N1<<endl;
	else
	cout<<" "<<obj_N2<<endl;
}
int main(){
	Number1 obj_N1;
	Number2 obj_N2;
	compare(obj_N1, obj_N2);
	return 0;
}
