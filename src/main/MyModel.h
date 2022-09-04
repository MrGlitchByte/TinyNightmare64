// Generated by Arabiki64 V1.2
// By Buu342


// Custom combine mode to allow mixing primitive and vertex colors
#ifndef G_CC_PRIMLITE
    #define G_CC_PRIMLITE SHADE,0,PRIMITIVE,0,0,0,0,PRIMITIVE
#endif


/*********************************
              Models
*********************************/

static Vtx vtx_MyModel[] = {
    {1, 1, 1, 10, 0, 0, 0, 0, 0, 255}, /* 0 */
    {-1, 1, 1, 10, 0, 0, 0, 0, 0, 255}, /* 1 */
    {-1, -1, 1, 10, 0, 0, 0, 0, 0, 255}, /* 2 */
    {1, -1, 1, 10, 0, 0, 0, 0, 0, 255}, /* 3 */
    {1, -1, -1, 10, 0, 0, 0, 0, 0, 255}, /* 4 */
    {-1, -1, 1, 10, 0, 0, 0, 0, 0, 255}, /* 5 */
    {-1, -1, -1, 10, 0, 0, 0, 0, 0, 255}, /* 6 */
    {-1, -1, -1, 10, 0, 0, 0, 0, 0, 255}, /* 7 */
    {-1, -1, 1, 10, 0, 0, 0, 0, 0, 255}, /* 8 */
    {-1, 1, 1, 10, 0, 0, 0, 0, 0, 255}, /* 9 */
    {-1, 1, -1, 10, 0, 0, 0, 0, 0, 255}, /* 10 */
    {-1, 1, -1, 10, 0, 0, 0, 0, 0, 255}, /* 11 */
    {1, 1, -1, 10, 0, 0, 0, 0, 0, 255}, /* 12 */
    {-1, -1, -1, 10, 0, 0, 0, 0, 0, 255}, /* 13 */
};

static Gfx gfx_MyModel[] = {
    gsSPVertex(vtx_MyModel+0, 14, 0),
    gsSP1Triangle(0, 1, 2, 0),
    gsSP1Triangle(0, 2, 3, 0),
    gsSP1Triangle(4, 3, 5, 0),
    gsSP1Triangle(4, 5, 6, 0),
    gsSP1Triangle(7, 8, 9, 0),
    gsSP1Triangle(7, 9, 10, 0),
    gsSP1Triangle(11, 12, 4, 0),
    gsSP1Triangle(11, 4, 13, 0),
    gsSP1Triangle(12, 0, 3, 0),
    gsSP1Triangle(12, 3, 4, 0),
    gsSP1Triangle(10, 9, 0, 0),
    gsSP1Triangle(10, 0, 12, 0),
    gsSPEndDisplayList(),
};


Gfx Wtx_Cube[] = {
//	gsDPLoadTextureBlock(Text_Celebi_Pii_SEREBHI_body_diff, G_IM_FMT_RGBA, G_IM_SIZ_16b,
//		32,32, 0, G_TX_WRAP|G_TX_NOMIRROR, G_TX_WRAP|G_TX_NOMIRROR,
//		5,5, G_TX_NOLOD, G_TX_NOLOD),
    
	gsSPDisplayList(gfx_MyModel),
	gsSPEndDisplayList()
};
