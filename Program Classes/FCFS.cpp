#include "FCFS.h"

FCFS::FCFS(Scheduler* pSch):Processor(pSch)
{
}

void FCFS::moveToRDY(Process* Rptr)
{
	RDY.InsertEnd(Rptr);
}

void FCFS::moveToRUN()
{
	RUN=RDY.GetHeadData();
}

void FCFS::moveToBLK()
{
}

void FCFS::ScheduleAlgo()
{
}


float FCFS::getpUtil()
{
	return (float)BUSY/(BUSY + T_IDLE);
}

int FCFS::getstate()
{
	return state;
}
