#include<iostream>
#include<stdio.h>

using namespace std;
int func(int a,int b,int c,int d){
  if((c%a==0)&&(d%b==0)){
	    cout<< c+d<<": "<<c/a<<" , "<<d/b<<endl;
	    return 0;}
	  else if((d-a)<0){
	    cout<< "*"<<c+d<<": "<<c/a<<" , "<<d/b<<endl;
	    return -1;
	  }
	  else
	    func(a,b,c+a,d-a);
	}

int main()
{
	int i;
	cout<<"Begin"<<endl<<endl;
	
	puts("start\n");
	for(i=1;i<=101;i++){
		func(3,5,0,i);
	}
	cout<<"End"<<endl<<endl;
	return 0;
}
