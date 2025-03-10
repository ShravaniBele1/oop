#include<iostream>
using namespace std;
class Number{
	private:
		int value;
	public:
		Number(int v=0):value(v){
		};
		//minus
		Number operator -(){
			return Number(-value);
		}
		//prefix
		Number operator --(){
			return Number(value--);
		}
		//postfix
		Number operator --(int){
			return Number(--value);
		}
		void show(){
			cout<<"value is:"<<value<<endl;
		}
};
int main(){
	Number n1(7);
	Number n2=-n1;
	n2.show();
	Number n3=--n2;
	n3.show();
	Number n4=n3--;
	n4.show();
	return 0;
}
