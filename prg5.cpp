#include <iostream>
using namespace std;
class Animal
{
public:
string nom;
int age;
 void set_value(string n, int a){ 
   nom=n;
   age =a;
 }
};
class Zebra : public Animal //cr�ation des classes h�rit�s
{
    public:
    void display( float poid)
{
cout<<"cet animal est un : "<<nom<<" son age est "<<age<<" son poid  "<<poid<<"kg"<<endl;
}

};
class Dauphin  : public Animal  //cr�ation des classes h�rit�s
{
    public:
    void display( float poid)
{
cout<<"et cet animal "<<nom<<" son age  "<<age<<" son poid  "<<poid<<"kg"<<endl;
}
};
int main()  // insertion des infos
{
    Zebra a;
    Dauphin b;
    a.set_value("zebra",15);
    b.set_value("Dauphin",14);
    a.display(14.4);
    b.display(15.5);
    
return 0;
}
