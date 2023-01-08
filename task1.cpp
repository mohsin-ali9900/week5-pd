#include <iostream>
#include <cmath>

float height(float, float);

using namespace std;

main()
{
  float degree,base,perpendicular;
  cout<<"Enter Degrees : ";
  cin>>degree;
  cout<<"Enter base : ";
  cin>>base;
 perpendicular=height(degree,base);
  cout<<"Height is : "<<perpendicular;
}

float height(float degree, float base)
{
  
  float radian,radians,perpendicular,angle;
  
  radian=57.2958;
  radians=degree/radian;
  angle=tan(radians);

  perpendicular=angle*base;
  return perpendicular;
}