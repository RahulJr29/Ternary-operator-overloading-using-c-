#include<iostream>
using namespace std;
class Test
{
	private: int real,img;
	public: Test(int r=0,int i=0)
			{
				real=r;
				img=i;
			}
			Test operator+(Test const &obj)
			{
				Test res;
				res.real=real+obj.real;
				res.img=img+obj.img;
				return res;
			}
			void print()
			{
				cout<<"\nThe addition of two complex number is:\n";
				cout<<real<<"+i"<<img<<endl;
			}
};
int main()
{
	Test t1(5,6),t2(2,3);
	Test t3=t1+t2;
	t3.print();
	return 0;
}