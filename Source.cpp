#include<iostream>
#include"header.h"

using namespace std;

int main()
{
	point p(6,7);
	cercle c(10,p);
	point p2(3, 4);
	cercle c2(5, p2);
	
    //affichage
	c.affichage();
	p.affichage();
	cout << endl;

	//Changement rayon
	cout << "Changement de rayon"<<endl;
	c.setrayon(12);
	c.affichage();

	//translation centre 
	cout << "Translation du centre : " << endl;
	p.translation(6);
	p.affichage();

	cout << endl;
	//calcul surface et périmètre
	cout<<"Surface : "<< c.surface()<<endl;
	cout<<"Perimetre : "<<c.perimetre()<<endl;

	//comparaison de deux cercles 
	if (c.comparer(c2))
	{
		cout << "Les deux cercles sont egaux" << endl;
	}
	else {
		cout << "Les deux cercles ne sont pas egaux" << endl;
	}

	//appartenance d'un point
	if (c.appartenance(p2))
	{
		cout << "P2 appartient au cercle" << endl;
	}
	else {
		cout << "P2 n'appartient pas au cercle" << endl;
	}
	



	





	


	return 0;
}