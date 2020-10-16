/*
 * CBasicMathFloat.h
 *
 *  Created on: Sep 14, 2020
 *      Author: nim
 */

#ifndef CBASICMATHFLOAT_H_
#define CBASICMATHFLOAT_H_

class CBasicMathFloat {
public:
	CBasicMathFloat();
	virtual ~CBasicMathFloat();

	float Addition(float x, float y);
	float Multiply(float x, float y);

	float Substraction(float x, float y);
	float Divide(float x, float y);

};

#endif /* CBASICMATHFLOAT_H_ */
