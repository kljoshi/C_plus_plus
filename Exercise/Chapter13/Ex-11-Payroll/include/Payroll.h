// Payroll.h

#ifndef PAYROLL_H
#define PAYROLL_H

class Payroll{

private:

	float hourlyRate;
	float hoursWorked;
	float totalPay;

public:

	Payroll();
	~Payroll();

	void setHourlyRate(float rate){
		hourlyRate = rate;
	}

	void setHoursWorked(float hoursW){
		hoursWorked = hoursW;
	}

	float getHourlyRate(){
		return hourlyRate;
	}

	float getHoursWorked(){
		return hoursWorked;
	}

	float calculateTotal();

};
#endif
