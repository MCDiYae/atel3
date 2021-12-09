#include <iostream>
using namespace std;


class personne {
    private:
    string nom , prenom;
    int age;
     public:
     personne(){ //constructeur
      string n,p;
      int a;      
     }
      void set(string n,string p,int a){
      nom=n;
      prenom=p;
      age=a;
    }
     void afficher(){
      cout<<"nom personne: "<<nom<<endl<<"prenom personne: "<<prenom<<endl<<"age : "<<age<<endl<<endl;
     }
     
     friend class employe;
     friend class chef;
     friend class directeur;
//Classe friend Une classe  peut accéder au private 

};


class employe : personne {
  private:
    float salaire;
  public:
    employe(){ //constructeur
      string n,p;
      int a; 
      float s;
    }

    void set(string n,string p,int a,float s){
      nom=n;
      prenom=p;
      age=a;
      salaire=s;
    }

    void afficher(){
       cout<<"nom employe: "<<nom<<endl<<"prenom employe: "<<prenom<<endl<<"age : "<<age<<endl<<"salaire : "<<salaire<<" DH"<<endl<<endl;
    }
    friend class chef;
    friend class directeur;
  };
  

class chef : employe {
private:
  string service;
public:
  chef(){  //constructeur
      string n,p,se;
      int a; 
      float s;
      

  }
   void set(string n,string p,int a,float s,string se){
      nom=n;
      prenom=p;
      age=a;
      salaire=s;
      service=se;
    }
    void afficher(){
       cout<<"nom chef: "<<nom<<endl<<"prenom chef: "<<prenom<<endl<<"age : "<<age<<endl<<"salaire : "<<salaire<<" DH"<<endl<<"service : "<<service<<endl<<endl;
    }
    friend class directeur;
 
};


class directeur : chef {
private:
  string societe;
public:
  directeur(){  //constructeur
      string n,p,se;
      int a; 
      float s;
  }
   void set(string n,string p,int a,float s,string se,string so){
      nom=n;
      prenom=p;
      age=a;
      salaire=s;
      service=se;
      societe=so;
    }
    void afficher(){
       cout<<"nom directeur: "<<nom<<endl<<"prenom directeur: "<<prenom<<endl<<"age : "<<age<<endl<<"salaire : "<<salaire<<" DH"<<endl<<"service : "<<service<<endl<<"societe: "<<societe<<endl<<endl;
    }
};



  main(){
    personne p;
    employe e1;
    chef c1;
    directeur d;
  
    p.set("med","pack",15);
    p.afficher();
    e1.set("jack","kiwi",90,900);
    e1.afficher();
    c1.set("bakr","dfk",77,73000,"service");
    c1.afficher();
    d.set("lotfi","waheb",35,0000,"service","societe");
    d.afficher();
  }
