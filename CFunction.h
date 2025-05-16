/*! @file CFunction.h
	@brief A virtual base class for functions of a single variable
	@author Gabriele Triglia matr.: 6440314 
    @author Alessio Marrazzo matr.: 6195070
*/ 

#ifndef FUNCTION_H
#define FUNCTION_H

#include <iostream>
#include <cmath>
#include <cstring>

using namespace std;

/**
 * @class Function
 * @brief Classe Astratta per l'implementazione delle funzioni
 */
class Function {

public:  
	/// @name COSTRUTTORI e DISTRUTTORE
	/// @{
    Function(){};
    virtual ~Function(){};
	/// @}

	/// @name GETTERS
	/// @{
	virtual double GetValue(double in)=0;
	/// @}

	/// @name DEBUG 
	/// @{
	virtual void Dump()=0;
    virtual void ErrorMessage(const char *string)=0; 					// metodo che stampa gli errori
	virtual void WarningMessage(const char *string)=0;					// metodo che stampa i warning
	/// @}
};

#endif
