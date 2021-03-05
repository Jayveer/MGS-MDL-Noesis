#pragma once
#include <inttypes.h>

typedef struct MtarData {
	uint32_t mtcmOffset;
	uint32_t mtcmSize;
} MtarData;

typedef struct MtarHeader {
	uint32_t magic;
	uint32_t maxJoint;//
	uint32_t numMotion;
	uint32_t mtcmOffset;
	uint16_t unknownA;
	uint16_t unknownB; //check?
	uint32_t resvBoneTableOffset;
	uint32_t resvUnknownOffset;
	uint32_t resvDataTableOffset;
} MtarHeader;