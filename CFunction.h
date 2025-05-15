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

class Function {

public:  
	/// @name CONSTRUCTORS/DESTRUCTOR
	/// @{
    /**
     * @brief Default constructor
     */
    Function(){};
    /**
     * @brief Decontructor
     */
    virtual ~Function(){};
	/// @}

	/// @name GETTERS
	/// @{
    /**
     * @brief Returns the value of the function
     */
	virtual double GetValue(double in)=0;
	/// @}

	/// @name DEBUG 
	/// @{
    /**
     * @brief dump method
     */
	virtual void Dump()=0;
    virtual void ErrorMessage(const char *string)=0; 						// metodo che stampa gli errori
	virtual void WarningMessage(const char *string)=0;					// metodo che stampa i warning
	/// @}
};

#endif
