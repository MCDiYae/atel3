#include <iostream>
using namespace std;
class Shape // cr�ation de la classe Shape
{
protected:
  float x, y;
public:
  Shape(float i, float j)  //constructeur shape 
  {
    x = i;
    y = j;
  }
};
class Rectangle: public Shape    //cr�ation des classes h�rit�s
{
public:
  Rectangle(float i, float j) : Shape(i, j) {}
  float area()
  {
    return (x * y);
  }
};
class Triangle: public Shape  //cr�ation des classes h�rit�s
{
public:
  Triangle(float i, float j) : Shape(i, j) {}
  float area()
  {
    return (x * y / 2);
  }
};

 main (){
  float h,l,h1,l1;
  
  cout << "entrer la hauteur de rectangle: "; cin >>h;  // Insertion du hauteur
  cout << "entrer largeur de rectangle: "; cin >>l; // Insertion largeur
  Rectangle rectangle(h,l);
  cout<<"la surface de rectangle " << rectangle.area() << endl;  // Affichage du r�sultat du calcul de l'air
 
  cout << "entrer votre hauteur de triangle: "; cin >>h1;  // Insertion du hauteur
  cout << "entrer votre largeur de triangle: "; cin >>l1;  // Insertion largeur
  Triangle triangle(h1,l1);
  cout<<"la surface de cett triangle est : "  << triangle.area() << endl;  // Affichage du r�sultat du calcul de l'air
} 
