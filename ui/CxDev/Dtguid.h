#ifdef __cplusplus
extern "C"{
#endif 


#ifndef __IID_DEFINED__
#define __IID_DEFINED__

typedef struct _IID
{
    unsigned long x;
    unsigned short s1;
    unsigned short s2;
    unsigned char  c[8];
} IID;

#endif // __IID_DEFINED__

#ifndef CLSID_DEFINED
#define CLSID_DEFINED
typedef IID CLSID;
#endif // CLSID_DEFINED


const CLSID CLSID_PipeTool = {0x25A0E110,0x070C,0x11D5,{0x8C,0x61,0x52,0x54,0xAB,0x20,0xED,0x22}};
const CLSID CLSID_RectangleTool = {0x97E640BF,0xC0F6,0x4785,{0x89,0xAA,0xEF,0xEF,0x6B,0x71,0x6E,0xED}};
const CLSID CLSID_RectTool = {0x7309E63D,0x3287,0x11D5,{0xA4,0x68,0x92,0x99,0xFC,0xC9,0x69,0x08}};
const CLSID CLSID_TextTool = {0x161F9ED6,0xE789,0x47E6,{0x85,0x76,0x24,0x54,0xF5,0x7A,0x37,0xF6}};
const CLSID CLSID_DataLinkTool = {0x838DC9B7,0x46F5,0x4AB6,{0x8C,0x0F,0x50,0xCC,0x11,0x21,0x62,0x1E}};
const CLSID CLSID_PieTool = {0xD3F3A3BC,0x42FF,0x4EDE,{0x86,0x19,0xC7,0xAF,0xB9,0xBD,0xDF,0xA8}};
const CLSID CLSID_PolygonTool = {0x6BA99F1F,0xCE0A,0x4F65,{0xBA,0x40,0x1B,0x1E,0x9C,0x80,0x5A,0xE7}};
const CLSID CLSID_PolyLineTool = {0x5BE0F52F,0xF920,0x4442,{0xB9,0x5A,0x03,0x6D,0x04,0x59,0xE8,0xC1}};
const CLSID CLSID_ChordTool = {0x93BB1BE4,0x3269,0x4039,{0x86,0xA8,0xC2,0x3E,0xD6,0xA5,0x21,0x38}};
const CLSID CLSID_PolyTool = {0x89B0F88E,0xF233,0x4E0A,{0x84,0xF1,0x46,0x72,0x19,0x1B,0x8A,0x2E}};

#ifdef __cplusplus
}
#endif