//Array of Objects
#include<iostream>
using namespace std;

class Student{
	static int count;
	private:
		int roll_no;
		string name;
	public:
		void getInfo(){
			cout<<"Roll No:"<<roll_no<<'\t'<<"name:"<<name<<endl;
		}
		
		Student(int r,string nm)
		{
			roll_no=r;
			name=nm;
			count++;
			cout<<count<<endl;
		}
};

int Student::count=0;
int main()
{
	Student s[3]={ Student(1,"A"), Student(2,"B"),Student(3,"C") };
	
		for(int i=0;i<3;i++)
		{
			s[i].getInfo();
		}
    
	return 0;
}
