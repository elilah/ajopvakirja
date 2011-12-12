/*
 * Ajoneuvo.cpp
 *
 *  Created on: 3.12.2011
 *      Author: Elinan
 */
#include <string>
#include "Ajoneuvo.h"



Ajoneuvo::Ajoneuvo(int merkki, int tunnus) {
	switch(merkki){
	case 1:
		Ajoneuvo *taksi1 = new Ajoneuvo();
		taksi1->tunnus(100);
		taksi1->merkki(1);
		cout<<"toyota";
		return taksi1;
		break;
	case 2:
		Ajoneuvo *taksi2 = new Ajoneuvo();
		taksi2 ->tunnus(120);
		taksi2.merkki(2);
		return taksi2;
		cout<<"ford";
		break;
	case 3:
		Ajoneuvo *taksi3 = new Ajoneuvo();
		taksi3-> tunnus(104);
		taksi3-> merkki(3);
		return taksi3;
		cout<<"citroen";
		break;
	case 4:
		Ajoneuvo *taksi4 = new Ajoneuvo();
		taksi4 -> tunnus(50);
		taksi4.merkki(4);
		return taksi4;
		cout<<"mersu";
		break;
	}
}
Ajoneuvo::Laskeloppukm(int lkm, int apukm, int km){

	cout<<"Anna loppu km lukema"<<endl;
		cin>>lkm;

		if(km < lkm){
			int apukm = km;
			km = lkm;
		}
}
int main()
{
std::cout<<"1. toyota ";
 cout<<"2. ford ";
 cout<<"3. citroen ";
 cout<<"4. mersu ";
 cout<<"valitse taksi: ";
 cin>>merkki;

 return 0;


}
