#include <iostream>
#include <cmath>
using namespace std;
class complexe {
	public:
	float r,img;

		complexe(){};
		complexe(float r,float img){
			this->r=r;
			this->img=img;
		}
	    void affiche(){  // creation dune fonction pour bien afficher le nombre complexe 
			if (img>=0)
			cout<<r<<"+"<<img<<"i"<<endl;
			else
			cout<<r<<""<<img<<"i"<<endl; // condition pour qu'on ne tombe pas a la situatiion +-
			
		}
		void operator+(complexe a){
			complexe c; //c pour mettre la somme des 2 complexes
			c.r = r+a.r;
			c.img= img+ a.img;
			c.affiche();
		}
		void operator-(complexe a){ // la soustraction des 2 complexes
			complexe c; 
			c.r = r-a.r;
			c.img= img - a.img;
			c.affiche();
		}
		
		void operator*(complexe a){ // le produit des 2 complexes
			complexe c; 
		    c.r= r*a.r - img* a.img;
		    c.img =r *a.img+ img*a.r;
			c.affiche();
		}
		void operator/(complexe a){ // la division des 2 complexes
			complexe c; 
		    c.r= (r*a.r + img* a.img)/(pow(a.r,2)+pow(a.img,2)) ;
		    c.img = -(r *a.img - img*a.r)/(pow(a.r,2)+pow(a.img,2)) ;
			c.affiche();
		}
};
 main(){
	float i,j,x,y;
	cout<<"entrez le premier nombre reel :";cin>>i;
	cout<<"entrez le premier nombre imaginaire :";cin>>j;
	cout<<"entrez le deuxieme nombre reel :";cin>>x;
	cout<<"entrez le deuxieme nombre imaginaire :";cin>>y;
    complexe a(i,j);
	complexe b(x,y);
    
  cout<<"a + b : ";a+b;
  cout<<"a - b : ";a-b;
  cout<<"a x b : ";a*b;
  cout<<"a / b : ";a/b;

	}
