/*! @file main.cpp
	@brief test file 
	@author Gabriele Triglia matr.: 6440314
	@author Alessio Marrazzo matr.: 6195070

	Details.
*/
#include <iostream>
#include "CFunction.h"
#include "CPolynomial.h"

int main(int argc, char const *argv[])
{
    std::cout << "FILE DI TEST" << std::endl;

    double cf1[7]={2.0,1.5,0,0,0,0,-1.0};
	double cf2[4]={-2.0,1.5,2.5,3.5};
    double cf3[3]={1.,2.,1.};
	
	Polynomial p0;
	Polynomial p1(cf1,7);
	Polynomial p2(cf2,4);
	Polynomial p3=p1;
    Function *f1 = new Polynomial(cf3, 3);
	
    cout << "--- INIZIO TEST POLINOMIO ---" << endl;
    cout << "Dump p0: ";
	p0.Dump();
    cout << "Dump p1: ";
	p1.Dump();
    cout << "Dump p2: ";
	p2.Dump();
    cout << "Dump p3: ";
	p3.Dump();
    cout << "Dump f1: ";
    f1->Dump();
	
    cout << "p0 == p1 ?: ";
	if (p0==p1)
		cout << "vero" << endl;
    else
        cout << "falso" << endl;

    cout << "p1 == p3 ?: ";
	if (p3==p1)
		cout << "vero" << endl;
    else
        cout << "falso" << endl;

    
	p1.Reset(); 
    cout << "TEST reset p1: ";
	p1.Dump();

    cout << "--- FINE TEST POLINOMIO ---" << endl;
    cout << "--- INIZIO TEST ESPONENZIALE ---" << endl;

    
    return 0;
}
