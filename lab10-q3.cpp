#include<iostream>
using namespace std;
class rect
{
 public:
 double len,bre;
 double area()
 {
  return len*bre;
 }
 double per()
 {
  return (2*(len+bre));
 }
};
int main()
{
 double len1,bre1,len2,bre2;
 cout<<"enter the length of the first rectangle"<<endl;
 cin>>len1;
 cout<<"enter the breadth of the first rectangle"<<endl;
 cin>>bre1;
 cout<<"enter the length of the second rectangle"<<endl;
 cin>>len2;
 cout<<"enter the breadth of the second rectangle"<<endl;
 cin>>bre2;
 rect rect1;
 rect rect2;
 rect1.len=len1;
 rect1.bre=bre1;
 rect2.len=len2;
 rect2.bre=bre2;
 double area1=rect1.area();
 double per1=rect1.per();
 double area2=rect2.area();
 double per2=rect2.per(); 
 cout<<"area of first rectangle="<<area1<<endl;
 cout<<"area of second rectangle="<<area2<<endl;
 cout<<"perimeter of first triangle="<<per1<<endl;
 cout<<"perimeter of second rectangle="<<per2<<endl;
 return 0;
}
