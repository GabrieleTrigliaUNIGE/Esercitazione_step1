/*! @file main.cpp
	@brief test file 
	@author Gabriele Triglia matr.: 6440314
	@author Alessio Marrazzo matr.: 6195070

	Details.
*/
#include <iostream>
#include "CFunction.h"
#include "CPolynomial.h"
#include "CExponential.h"

using namespace std;

/**
 * @brief main function
 * @return 0
 */
int main()
{
    cout << "FILE DI TEST" << endl;

    double cf1[7]={2.0,1.5,0,0,0,0,-1.0};
	double cf2[4]={-2.0,1.5,2.5,3.5};
    double cf3[3]={1.,2.,1.};
	
	Polynomial p0;
	Polynomial p1(cf1,7);
	Polynomial p2(cf2,4);
	Polynomial p3=p1;
    Function *f1 = new Polynomial(cf3, 3);

    Exponential e1(2,2,4);
    Exponential e2(-3,3,4);
    Function *f2 = new Exponential(3,5,6);
	
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
	if (p0==p1) {
        cout << "vero" << endl;
    } else {
        cout << "falso" << endl;
    }

    cout << "p1 == p3 ?: ";
	if (p3==p1) {
        cout << "vero" << endl;
    } else {
        cout << "falso" << endl;
    }

    cout << "p3(5) = " << p3.GetValue(1.) << endl;
    
	p1.Reset(); 
    cout << "TEST reset p1: ";
	p1.Dump();
    // DA ERRORE CONTROLLARE ESISTENZA POLINOMIO IN GetValue(); --> cout << "p1(5) = " << p1.GetValue(1.) << endl;

    cout << "--- FINE TEST POLINOMIO ---" << endl;
    cout << "--- INIZIO TEST ESPONENZIALE ---" << endl;

    cout << "Dump e1: ";
    e1.Dump();
    cout << "Dump e2: ";
    e2.Dump();
    cout << "Dump f2: ";
    f2->Dump();

    cout << "e1(1)=" << e1.GetValue(1) << endl;
    cout << "e2(1)=" << e2.GetValue(1) << endl;

    e2 = e1;

    e2.Dump();

    cout << "e1 == e2 ?: ";
    if (e1 == e2) { 
        cout << "vero" << endl;
    }
    
    cout << "e2(1)=" << e2.GetValue(1) << endl;



    cout << "--- FINE TEST ESPONENZIALE ---" << endl;
    cout << "--- INIZIO TEST LOGARITMO ---" << endl;


    
    delete f1;
    return 0;
}
