// Generated by IDAStruct_To_CHeader.py
#pragma once
#include <windows.h>


#pragma pack(push, 1)
struct CDoor	// sizeof = 0x18
{
	DWORD OpenAngle;
	DWORD ClosedAngle;
	WORD nDirn;
	BYTE nAxis;
	BYTE nDoorState;
	DWORD Angle;
	DWORD PrevAngle;
	DWORD AngVel;
};
#pragma pack(pop)

static_assert(sizeof(CDoor) == 0x18, "Incorrect struct size: CDoor");