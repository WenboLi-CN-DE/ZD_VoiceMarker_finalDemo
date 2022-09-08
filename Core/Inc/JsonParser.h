#ifndef __JSONPAESER_H
#define __JSONPAESER_H
#include "str.h"
	typedef struct// object data type
	{
			char Buf[6][20];
			uint8_t Idx_row;
			uint8_t Idx_column;
	} MSGQUEUE_OBJ_t;
	

	void cpuInfoParser();
#endif /* __MAIN_H */