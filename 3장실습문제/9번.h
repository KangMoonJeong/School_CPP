#pragma once
#include <iostream>
using namespace std;

class Oval
{
private:
	int width, height;

public:
	Oval();
	Oval(int h, int w);
	int getWidth();
	int getHeight();
	void set(int w, int h);
	void show();
	~Oval();
};