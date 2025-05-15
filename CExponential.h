/*! @file CExponential.h
	@brief A class for exponential functions 
	@author Gabriele Triglia matr.: 6440314
	@author Alessio Marrazzo matr.: 6195070

	La funzione esponenziale (classe Exponential) è formalizzata come  k×bcx, con b > 0 
    La classe deve quindi prevedere le seguenti variabili membro:  

    double b_coeff  	per memorizzare la base b  
    double  k_coeff	per memorizzare il coefficiente k
    double  c_coeff	per memorizzare il coefficiente c 
*/
#ifndef EXPONENTIAL_H
#define EXPONENTIAL_H
#include "CFunction.h"

/**
 * @class CExponential
 * @brief A class for exponential functions
 */
class Exponential : public Function{
private:
    double b_coeff; // per memorizzare la base b
    double k_coeff; // per memorizzare il coefficiente k
    double c_coeff; // per memorizzare il coefficiente c

public:

    /// @name CONSTRUCTORs and DESTRUCTOR 
	/// @{
    Exponential();
    Exponential(double b, double k, double c);
    ~Exponential();
    /// @}

    /// @name OPERATORS 
	/// @{
    Exponential& operator=(const Exponential& other);
    bool operator==(const Exponential& other);
    /// @}

    void SetExponential(double b, double k, double c);
    double GetValue(double in);

    void Reset();
    
    /// @name DEBUG and SERIALIZATION 
	/// @{
	void ErrorMessage(const char *string); 						// metodo che stampa gli errori
	void WarningMessage(const char *string);					// metodo che stampa i warning
	void Dump();												// metodo dump
	/// @}
};

#endif /* EXPONENTIAL_H */
