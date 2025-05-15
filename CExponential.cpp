/*! @file CExponential.cpp
	@brief Implementation for exponential functions 
	@author Gabriele Triglia matr.: 6440314
	@author Alessio Marrazzo matr.: 6195070

	La funzione esponenziale (classe Exponential) è formalizzata come  k×bcx, con b > 0 
    La classe deve quindi prevedere le seguenti variabili membro:  

    double b_coeff  	per memorizzare la base b  
    double  k_coeff	per memorizzare il coefficiente k
    double  c_coeff	per memorizzare il coefficiente c
*/
#include "CExponential.h"

/**
 * @brief Costruttore della classe Exponential
 */
Exponential::Exponential(){
    b_coeff = 1;
    k_coeff = 1;
    c_coeff = 0;
}

Exponential::Exponential(double b, double k, double c){
    SetExponential(b,k,c);
}

void Exponential::SetExponential(double b, double k, double c){
    if (b>0)
        b_coeff = b;
    else
        ErrorMessage("SetExponential: La base non puo essere negativa");
    k_coeff = k;
    c_coeff = c;
}

// todo: copy constr. , operators, destructor, getValue

/**
 * @brief writes an error message 
 * @param string message to be printed
 */
void Exponential::ErrorMessage(const char *string) {
	
	cout << endl << "ERROR -- Exponential --";
	cout << string << endl;

}

/**
 * @brief writes a warning message
 * @param string message to be printed
 */ 
void Exponential::WarningMessage(const char *string) {
	
	cout << endl << "WARNING -- Exponential --";
	cout << string << endl;

}