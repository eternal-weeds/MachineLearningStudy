#include "LeastSquaresMethod.h"



double LeastSquaresMethod::average(std::vector<double> vars)
{
	double result = 0.0;

	for (double var : vars)
	{
		result += var;
	}

	return result / vars.size();
}
