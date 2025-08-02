#include<iostream>
using namespace std;
void swap(int *a, int*b){
    int temp = *a;
    *a = *b;
    *b = temp;
return;
}
int main(){
    int num1, num2;
    cout<< "enter the number:";
    cin>>num1>>num2;
    swap(&num1,&num2);
    cout<< "after swapping the numbers are:"<<num1<<"and"<<num2<<endl;
    return 0;
}
