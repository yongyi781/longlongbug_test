// longlongbug_test.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"

using std::chrono::high_resolution_clock;
using std::cout;
using std::endl;

high_resolution_clock::time_point startTime;
high_resolution_clock::time_point endTime;

int elapsedTime()
{
	auto diff = endTime - startTime;
	return std::chrono::duration_cast<std::chrono::nanoseconds>(diff).count();
}

int _tmain()
{
	cout.imbue(std::locale());
	startTime = high_resolution_clock::now();
	endTime = startTime + std::chrono::nanoseconds(0x22);
	cout << "Some text" << endl;

	long elapsed = elapsedTime();
	cout << elapsed << endl;
}
