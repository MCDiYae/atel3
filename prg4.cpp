#include <iostream>
using namespace std;
class mere {     // ici nous avons cree la class mere
	public:
	void display(){  // on a defini la methode diplay()
		cout<<"class mere"<<endl;
	}
	
};
class fille {   // ici nous avons cree la class fille
	public:
	void display(){   // on a defini la methode diplay()
		cout<<"class fille"<<endl;
	}
	
};
int main()
{
	fille objet;  //utilisation de class fille acette methode main
	objet.display();
	return 0;
}

