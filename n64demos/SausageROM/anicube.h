// Generated by Arabiki64 V1.3
// By Buu342

// Model convenience macro
#define MODEL_MyModel (&mdl_MyModel)

// Mesh data
#define MESHCOUNT_MyModel 1

#define MESH_MyModel_Bone 0

// Animation data
#define ANIMATIONCOUNT_MyModel 1

#define ANIMATION_MyModel_ArmatureAction 0


// Custom combine mode to allow mixing primitive and vertex colors
#ifndef G_CC_PRIMLITE
    #define G_CC_PRIMLITE SHADE,0,PRIMITIVE,0,0,0,0,PRIMITIVE
#endif


/*********************************
              Models
*********************************/

static Vtx vtx_MyModel[] = {
    {15, 15, -3, 0, 0, 0, 73, 73, 73, 255}, /* 0 */
    {-15, 15, -3, 0, 0, 0, -73, 73, 73, 255}, /* 1 */
    {-15, -15, -3, 0, 0, 0, -73, -73, 73, 255}, /* 2 */
    {15, -15, -3, 0, 0, 0, 73, -73, 73, 255}, /* 3 */
    {15, -15, -15, 0, 0, 0, 73, -73, -73, 255}, /* 4 */
    {-15, -15, -15, 0, 0, 0, -73, -73, -73, 255}, /* 5 */
    {-15, 15, -15, 0, 0, 0, -73, 73, -73, 255}, /* 6 */
    {15, 15, -15, 0, 0, 0, 73, 73, -73, 255}, /* 7 */
};

static Gfx gfx_MyModel[] = {
    gsSPVertex(vtx_MyModel+0, 8, 0),
    gsDPSetCycleType(G_CYC_1CYCLE),
    gsDPSetRenderMode(G_RM_AA_ZB_OPA_SURF, G_RM_AA_ZB_OPA_SURF2),
    gsDPSetCombineMode(G_CC_PRIMLITE, G_CC_PRIMLITE),
    gsDPSetTextureFilter(G_TF_BILERP),
    gsSPClearGeometryMode(0xFFFFFFFF),
    gsSPSetGeometryMode(G_SHADE | G_ZBUFFER | G_CULL_BACK | G_SHADING_SMOOTH | G_LIGHTING),
    gsDPSetPrimColor(0, 0, 200, 50, 200, 255),
    gsDPPipeSync(),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 3, 2, 0, 4, 2, 5, 0),
    gsSP2Triangles(5, 2, 1, 0, 5, 1, 6, 0),
    gsSP2Triangles(6, 7, 4, 0, 6, 4, 5, 0),
    gsSP2Triangles(7, 0, 3, 0, 7, 3, 4, 0),
    gsSP2Triangles(6, 1, 0, 0, 6, 0, 7, 0),
    gsSPEndDisplayList(),
};


/*********************************
          Animation Data
*********************************/

static s64FrameData anim_MyModel_ArmatureAction_framedata0[] = {
    {0.0000, 0.0000, 0.0000, 1.0000, 0.0000, 0.0000, 0.0000, 1.0000, 1.0000, 1.0000},
};
static s64FrameData anim_MyModel_ArmatureAction_framedata2[] = {
    {0.0000, 0.0000, 0.0000, 0.9412, 0.0000, 0.3377, 0.0000, 1.0000, 1.0000, 1.0000},
};
static s64FrameData anim_MyModel_ArmatureAction_framedata4[] = {
    {0.0000, 0.0000, 0.0000, 1.0000, 0.0000, 0.0000, 0.0000, 1.0000, 1.0000, 1.0000},
};
static s64KeyFrame anim_MyModel_ArmatureAction_keyframes[] = {
    {0, anim_MyModel_ArmatureAction_framedata0},
    {2, anim_MyModel_ArmatureAction_framedata2},
    {4, anim_MyModel_ArmatureAction_framedata4},
};


/*********************************
        Sausage64 Structs
*********************************/

static s64Mesh meshes_MyModel[] = {
    {"Bone", 0, gfx_MyModel_Bone},
};

static s64Animation anims_MyModel[] = {
    {"ArmatureAction", 3, anim_MyModel_ArmatureAction_keyframes},
};

static s64ModelData mdl_MyModel = {1, 1, meshes_MyModel, anims_MyModel};