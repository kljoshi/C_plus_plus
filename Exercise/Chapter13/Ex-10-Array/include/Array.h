#ifndef ARRAY_H
#define ARRAY_H

class Array{

private:
	float *numbers;
	int numSize;

public:
	Array(int size);
	~Array();
	bool isValid(int position);
	void setElement(int position, float value);
	float getElement(int position);
	float getMaxElement();
	float getMinElement();
	float getAveValue();

};
#endif
