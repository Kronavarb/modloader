// Generated by IDAStruct_To_CHeader.py
#pragma once
#include <windows.h>
#include "RwLinkList.h"
#include "RpInterpolator.h"
#include "RwLLLink.h"
#include "RwSphere.h"
#include "RwObjectHasFrame.h"


#pragma pack(push, 1)
struct RpAtomic	// sizeof = 0x70
{
	RwObjectHasFrame object;
	DWORD repEntry;
	DWORD geometry;
	RwSphere boundingSphere;
	RwSphere worldBoundingSphere;
	DWORD clump;
	RwLLLink inClumpLink;
	DWORD renderCallback;
	RpInterpolator interpolator;
	WORD renderFrame;
	WORD pad;
	RwLinkList llWorldSectorsInAtomic;
	DWORD pipeline;
};
#pragma pack(pop)

static_assert(sizeof(RpAtomic) == 0x70, "Incorrect struct size: RpAtomic");