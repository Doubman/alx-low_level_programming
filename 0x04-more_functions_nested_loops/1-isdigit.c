#include "main.h"

/**
 *
 *
 * isdigit -checks for s digit from 0-9;
 *
 * Return ();
 *
 */
	int _isdigit(int c);
{
	if(c >= 0 && c <= 9){
		return(1);
	}
	else{
		return(0);
	}
}
