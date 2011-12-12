/*
 * Kuljettaja.h
 *
 *  Created on: 3.12.2011
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
		int ktunnus;
	virtual ~Kuljettaja();
protected:
	void TulostaKuljettaja();

private:

};

} /* namespace paaojelma */
#endif /* KULJETTAJA_H_ */
