#ifndef QCOMPLEXNUMBER_H
#define QCOMPLEXNUMBER_H

template <typename T>
class QComplexNumber
{

	public:

		QComplexNumber();
		QComplexNumber(T real, T imaginary);

		void setReal(T real);
		void setImaginary(T imaginary);
		void set(T real, T imaginary);
		void set(QComplexNumber complex);

		T real();
		T imaginary();

	private:

		T mReal;
		T mImaginary;

};

typedef QComplexNumber<float> QComplexFloat;
typedef QComplexNumber<double> QComplexDouble;
typedef QComplexNumber<int> QComplexInteger;

#include "../sources/qcomplexnumber.cpp"

#endif