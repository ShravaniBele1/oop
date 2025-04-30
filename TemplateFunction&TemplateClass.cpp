#include<iostream>
using namespace std;
template <typename T>
T Findmax(T a,T b){
	return (a>b)? a:b;
}
template <typename T>
class Calculator{
		T a,b;
	public:
		Calculator(T x,T y){
			a=x;
			b=y;
		}
		T add(){
			return a+b;
		}
		T substraction(){
			return a-b;
		}
		T multiplication(){
			return a*b;
		}
		T division(){
			return a/b;
		}
	
};
int main(){
	cout<<"Max of 5 and 10 is:"<<Findmax(5,10)<<endl;
	
	Calculator <int> a1(5,10);
	cout<<"Integer addintion operations:"<<a1.add()<<endl<<"Integer substraction operation:"<<a1.substraction()<<endl;
	
	Calculator <float> a2(3.5,2.0);
	cout<<"Float multiplication operations:"<<a2.multiplication()<<endl<<"Float division operations:"<<a2.division()<<endl;
}

