#include <iostream>
using namespace std;
class Myclass { 
	public:  /* pour le definir en dehors de la classw*/ 
		Myclass();
		~Myclass();
		
};
Myclass::Myclass(){
	cout<<"constructeur par defaut"<< endl;
}
Myclass::~Myclass(){
	cout<<"destructeur "<< endl;
}
int main(){ //creation d'objet d'une classe
	Myclass objet;
	return 0;
}


