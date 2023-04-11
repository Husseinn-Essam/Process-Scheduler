#pragma once
#include "Process.h"
#include "Processor.h"
#include "FCFS.h"
#include "RR.h"
#include "SJF.h"
#include "../DS Implementations/LinkedQueue.h"
#include "../DS Implementations/LinkedList.h"
#include "../DEFS.h"
class Scheduler
{
	private:
		int timeCounter;
		int NF;
		int NS;
		int NR;
		int timeSlice;
		int RTF;
		int MaxW;
		int STL;
		int forkProb;
		int noProcesses; // number of processes
		int ProcessorsCounter;//just a counter for the creation
		Processor* myProcessor;// Processor ptr for process creation
		Process* myProcess; // process ptr for process creation
		LinkedQueue<Process> NewList;
		LinkedQueue<Process> BlkList;
		LinkedQueue<Process> TrmList;
		Processor** processorList;
		Processor* SQF;
		Processor* LQF;
		int tSQF;
		int tLQF;
		//SIGKILL Queue
		LinkedQueue<sigKill> killQ;
		sigKill* sigPtr; // placeholder ptr 
		int sigkillTime , killID;
public:
	Scheduler();
	void fileLoading();
	void schedToTRM(Process*);
	void schedToBLk(Process*);
};

