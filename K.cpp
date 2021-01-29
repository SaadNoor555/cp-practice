#include<bits/stdc++.h>
using namespace std;
#define ld long double

ld f(ld x, ld y,ld g ,ld h,ld r){

	return ((x-g)*(x-g))+((y-h)*(y-h))-(r*r);
}
ld eps = (ld)10e-11;
bool eq(ld p,ld q){
	if(abs(p-q)<eps)return true;
	else return false;
}
ld getlen(ld p,ld q, ld w, ld v){
	ld len= sqrt((p-w)*(p-w)+(q-v)*(q-v));
	return len;
}
ld angles(ld m1,ld m2,ld x1, ld y1 , ld x2, ld y2){
	ld v2x=(x2-m1);
	ld v2y=(y2-m2);
	ld v1x=(m1-x1);
	ld v1y=(m2-y1);
	ld dot1=v1x*v2x+v1y*v2y;
	ld len1=getlen(m1,m2,x1,y1);
	ld len2=getlen(m1,m2,x2,y2);
	ld angle= acos((dot1/(len1*len2)));
	return angle;
	
}
int main(){
	ld g,h,r;

ld x1,y1,x2,y2;
ld x3,y3;
	cin>>g>>h>>r;
	cin>>x1>>y1>>x2>>y2;
	ld a, b, c;
	a= y1-y2;
	b= x2-x1;
	c= x1*a+y1*b;

	if((abs(a*g+b*h+c)/sqrt(a*a+b*b))<=r)
	{
		cout<< "No way\n";
		return 0;
	}
	x3=(x1+x2)/2;
	y3=(y1+y2)/2;
	ld m1=(x3+g)/2;
	ld m2=(y3+h)/2;
	ld tx=x3;
	ld ty=y3;
	ld tg=g;
	ld th=h;
	int cnt=100;
	int id=0;
	while(id!=cnt){
		ld tmp=f(m1,m2,g,h,r);
		//cout<<tmp<<endl;
		if(eq(tmp,0)==true)break;
		else{
			if(tmp>0){
				tx=m1;
				ty=m2;
				m1=(m1+tg)/2;
				m2=(m2+th)/2;
				
			}
			else{
				tg=m1;
				th=m2;
				m1=(m1+tx)/2;
				m2=(m2+ty)/2;
			}
		}
		id++;
	}
	
	// cout<<angles(m1,m2,x1,y1,x2,y2);
	
		cout<<m1<<" "<<m2<<endl;
	
	
	
}
