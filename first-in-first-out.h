#include "Pcb.h"
#include "scheduling-algorithm.h"

#ifndef FIRSTINFIRSTOUT_H
#define FIRSTINFIRSTOUT_H

class firstInFirstOut : public SchedulingAlgorithm {

public:

	firstInFirstOut(vector<Pcb> processes);

private:

	void startProcesses();
	void cpuBurst();
	void ioBurst();
	void output();

	int timeCount;

};

#endif