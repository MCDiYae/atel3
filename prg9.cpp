#include<iostream>
using namespace std;
class Test {
	 public : 
	static int count; //static partagé par tous les objets de classe test
	 call(){
	  	count++;
	  }
	
};
int Test :: count = 0;
int main(){
	Test a,b,c,d,e,f,g; // l'appel du fonction 
	b.call();
	c.call();
	a.call();
	cout<<"le nbr est "<<Test::count<<endl;
	return 0;
}
