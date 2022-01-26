#include <iostream>
#include <windows.h>
#include "HybridDetect.h"

//main
int main(int argc, char *argv[]) {

bool IsOSHybridCapable;
PROCESSOR_INFO procInfo;

IsOSHybridCapable = IsHybridOSEx();
GetProcessorInfo(procInfo);

std::cout << "vendor string: " << procInfo.vendorID << std::endl;
std::cout << "brand string: " << procInfo.brandString << std::endl;
std::cout << "number of groups: " << procInfo.numGroups << std::endl;
std::cout << "number of numa nodes: " << procInfo.numNUMANodes << std::endl;
std::cout << "number of physical cores: " << procInfo.numPhysicalCores << std::endl;
std::cout << "number of logical cores: " << procInfo.numLogicalCores << std::endl;
std::cout << "number of L1 caches: " << procInfo.numL1Caches << std::endl;
std::cout << "number of L2 caches: " << procInfo.numL2Caches << std::endl;
std::cout << "number of L3 caches: " << procInfo.numL3Caches << std::endl;
std::cout << "is hybrid: " << procInfo.hybrid << std::endl;
std::cout << "turboBoost: " << procInfo.turboBoost << std::endl;
std::cout << "turboBoost: " << procInfo.turboBoost3_0 << std::endl;
//groups
//nodes
//caches
//cores
std::cout << "Core0 id: " << procInfo.cores[0].id << std::endl;
std::cout << "Core0 logical processor indexid: " << procInfo.cores[0].logicalProcessorIndex << std::endl;
std::cout << "Core0 AVX512 VNNI: " << procInfo.cores[0].AVX512_VNNI << std::endl;
std::cout << "Core0 core type: " << CoreTypeString(procInfo.cores[0].coreType) << std::endl;

}