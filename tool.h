#pragma once
#include "mat.h"
#include "bone.h"
#include "mesh.h"
#include "motion.h"

bool g_mgs3MtarPrompt = false;
const char* g_mgs3plugin_name = "Metal Gear Solid 3";

inline
int genericToolSet(bool& setting, int toolIdx) {
    setting = !setting;
    g_nfn->NPAPI_CheckToolMenuItem(toolIdx, setting);
    return 1;
}

int mgs3_anim_prompt(int toolIdx, void* user_data) {
    return genericToolSet(g_mgs3MtarPrompt, toolIdx);
}

inline
int makeTool(char* toolDesc, int (*toolMethod)(int toolIdx, void* userData)) {
    int handle = g_nfn->NPAPI_RegisterTool(toolDesc, toolMethod, NULL);
    g_nfn->NPAPI_SetToolSubMenuName(handle, g_mgs3plugin_name);
    return handle;
}

inline
void applyTools() {
    makeTool("Prompt for Motion Archive", mgs3_anim_prompt);
}