#include<iostream>
using namespace std;
class test
{
private:
int x;
public:
test(int a)
{
x =a;
}
int get()
{
return x;
}
};
int main()
{
test a(7);
cout<<"The Number is: "<<a.get();
return 0;
}
