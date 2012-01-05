/*
 * Kuljettaja.h
 *
 *  Created on: 3.12.2011
 *  päivitetty 19.12.2011
 *      Author: Elinan
 */
using namespace std;
#include <string>
#ifndef KULJETTAJA_H_
#define KULJETTAJA_H_

namespace paaojelma {

class Kuljettaja {
public:
	Kuljettaja();
	//kuljettajan nimi
		string nimi;
		string enimi;
		string snimi;
	virtual ~Kuljettaja();
	virtual void setNimi(std::string n, int kt);
protected:
	void TulostaKuljettaja();

private:
	int ktunnus;
};

}
#endif /* KULJETTAJA_H_ */
