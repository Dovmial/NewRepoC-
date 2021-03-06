#ifndef BASEPLUS_H
#define BASEPLUS_H
#include <string>
using std::string;

#include "CommissionEmployee.h"

class BasePlusCommEmpl : public CommissionEmployee
{
public:
	BasePlusCommEmpl(const string&, const string &,
		const string &, double = 0.0, double = 0.0, double = 0.0);

	void setBaseSalary(double);
	double getBaseSalary()const;
	virtual double earnings()const;
	virtual void print()const;
private:
	double baseSalary;
};
#endif