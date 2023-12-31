#include "ninja_girl.h"


unsigned char const ninja_girlTileData[512] = // 16tiles x 32 bytes
{
// tile: 0
    0x60, 0x00, 0x00, 0x00, 
    0x97, 0x60, 0x60, 0x00, 
    0x68, 0x17, 0x17, 0x10, 
    0xb0, 0x46, 0x4f, 0x29, 
    0xf0, 0x09, 0x0f, 0x46, 
    0x60, 0x1f, 0x1f, 0x00, 
    0x21, 0x1e, 0x1e, 0x00, 
    0x47, 0x39, 0x39, 0x03, 
// tile: 1
    0xc0, 0x00, 0x00, 0x00, 
    0x30, 0xc0, 0xc0, 0x00, 
    0x08, 0x60, 0xf0, 0x90, 
    0x04, 0x98, 0xf8, 0x60, 
    0x04, 0xf8, 0xf8, 0x00, 
    0xb4, 0x48, 0x48, 0x00, 
    0x28, 0x20, 0x60, 0xf0, 
    0x00, 0x00, 0x00, 0x00, 
// tile: 2
    0x49, 0x33, 0x37, 0x05, 
    0x88, 0x72, 0x77, 0x05, 
    0xc4, 0x3a, 0x3b, 0x41, 
    0x74, 0x0a, 0x0b, 0x31, 
    0x30, 0x0e, 0x03, 0x01, 
    0x04, 0x14, 0x05, 0x0f, 
    0x0e, 0x22, 0x0e, 0x1f, 
    0x1f, 0x41, 0x1f, 0x3f, 
// tile: 3
    0x28, 0xb0, 0x60, 0x60, 
    0x18, 0x00, 0xe0, 0xf0, 
    0x14, 0xc8, 0xe8, 0x30, 
    0x34, 0x08, 0xc8, 0xe0, 
    0xc8, 0x30, 0x20, 0xc0, 
    0x70, 0x00, 0xc0, 0xc0, 
    0x48, 0x00, 0x30, 0xb0, 
    0x4c, 0x04, 0x30, 0xb0, 
// tile: 4
    0x17, 0x40, 0x11, 0x39, 
    0x39, 0x80, 0x36, 0x76, 
    0x39, 0x90, 0x26, 0x66, 
    0x3e, 0x79, 0x19, 0x18, 
    0x7c, 0x7f, 0x33, 0x30, 
    0xf3, 0xf1, 0x43, 0x4f, 
    0x47, 0x49, 0x07, 0x07, 
    0x00, 0x08, 0x00, 0x07, 
// tile: 5
    0xbe, 0x8e, 0x8c, 0xcc, 
    0x9f, 0x9f, 0x86, 0xe6, 
    0xa7, 0x97, 0xa1, 0xe1, 
    0x21, 0xc1, 0xc0, 0x20, 
    0x20, 0xc0, 0xc0, 0x20, 
    0x40, 0x20, 0x40, 0xc0, 
    0x00, 0x20, 0x00, 0xc0, 
    0x00, 0x40, 0x00, 0x80, 
// tile: 6
    0x80, 0x80, 0x00, 0x00, 
    0x00, 0x00, 0x00, 0x00, 
    0x00, 0x00, 0x00, 0x00, 
    0x00, 0x00, 0x00, 0x00, 
    0x00, 0x00, 0x00, 0x00, 
    0x00, 0x00, 0x00, 0x00, 
    0x00, 0x00, 0x00, 0x00, 
    0x00, 0x00, 0x00, 0x00, 
// tile: 7
    0x0c, 0x33, 0x02, 0x0c, 
    0x32, 0x40, 0x2c, 0x3e, 
    0x72, 0xa0, 0x6c, 0x7e, 
    0x59, 0xae, 0x5e, 0x58, 
    0x08, 0xa7, 0x07, 0x5c, 
    0x07, 0x67, 0x07, 0x1f, 
    0x00, 0x30, 0x00, 0x0f, 
    0x00, 0x00, 0x00, 0x00, 
// tile: 8
    0x80, 0x00, 0x00, 0x00, 
    0xc0, 0x80, 0xc0, 0xc0, 
    0x00, 0x40, 0x00, 0x80, 
    0x00, 0x00, 0x00, 0x00, 
    0x00, 0x00, 0x00, 0x00, 
    0x00, 0x00, 0x00, 0x00, 
    0x00, 0x00, 0x00, 0x00, 
    0x00, 0x00, 0x00, 0x00, 
// tile: 9
    0xa8, 0x30, 0x60, 0x60, 
    0x18, 0x00, 0xe0, 0xf0, 
    0x14, 0xc8, 0xe8, 0x30, 
    0x34, 0x08, 0xc8, 0xe0, 
    0xc8, 0x30, 0x20, 0xc0, 
    0x70, 0x00, 0xc0, 0xc0, 
    0x48, 0x00, 0x30, 0xb0, 
    0x4c, 0x04, 0x30, 0xb0, 
// tile: 10
    0x0b, 0x20, 0x08, 0x1c, 
    0x1c, 0x40, 0x1b, 0x3b, 
    0x1c, 0x48, 0x13, 0x33, 
    0x1f, 0x3c, 0x0c, 0x0c, 
    0x3e, 0x3f, 0x19, 0x18, 
    0x79, 0x78, 0x21, 0x27, 
    0x3b, 0x64, 0x03, 0x03, 
    0x08, 0x90, 0x00, 0x6f, 
// tile: 11
    0xdf, 0x47, 0xc6, 0xe6, 
    0xcf, 0x4f, 0x43, 0x73, 
    0xd3, 0x4b, 0x50, 0x70, 
    0x10, 0xe0, 0xe0, 0x10, 
    0x10, 0xe0, 0xe0, 0x10, 
    0xd0, 0x48, 0xd0, 0xf0, 
    0xc1, 0x48, 0xc0, 0xf0, 
    0xb6, 0x01, 0x81, 0xf8, 
// tile: 12
    0x80, 0x80, 0x00, 0x00, 
    0xc0, 0xc0, 0x80, 0x80, 
    0x80, 0x80, 0x00, 0x00, 
    0x00, 0x00, 0x00, 0x00, 
    0x00, 0x00, 0x00, 0x00, 
    0x80, 0x00, 0x80, 0x80, 
    0x80, 0xc0, 0x80, 0x80, 
    0x00, 0x00, 0x00, 0x00, 
// tile: 13
    0x18, 0x41, 0x0c, 0x3e, 
    0x0a, 0x99, 0x1c, 0x7e, 
    0x34, 0xb2, 0x38, 0x7c, 
    0x28, 0xb0, 0x30, 0x68, 
    0x50, 0xe0, 0x60, 0x40, 
    0x60, 0x00, 0x40, 0x40, 
    0x00, 0x00, 0x00, 0x00, 
    0x00, 0x00, 0x00, 0x00, 
// tile: 14
    0x26, 0x81, 0x19, 0x7e, 
    0x21, 0x41, 0x1f, 0x3f, 
    0x1a, 0x03, 0x07, 0x1f, 
    0x07, 0x00, 0x02, 0x07, 
    0x00, 0x02, 0x00, 0x01, 
    0x00, 0x01, 0x00, 0x00, 
    0x00, 0x00, 0x00, 0x00, 
    0x00, 0x00, 0x00, 0x00, 
// tile: 15
    0x80, 0xa0, 0x80, 0xc0, 
    0x80, 0xa0, 0x80, 0xc0, 
    0x00, 0x20, 0x00, 0xc0, 
    0x00, 0x40, 0x00, 0x80, 
    0x00, 0x40, 0x00, 0x80, 
    0x00, 0x80, 0x00, 0x00, 
    0x00, 0x00, 0x00, 0x00, 
    0x00, 0x00, 0x00, 0x00, 
};

const AnimationSprite ninja_girlFrame0Sprites[] = 
{
    { 4, 1, 0 },
    { 12, 2, 1 },
    { 4, 9, 2 },
    { 12, 9, 3 },
    { 4, 17, 4 },
    { 12, 17, 5 },
    { 20, 19, 6 },
    { 5, 25, 7 },
    { 13, 29, 8 },
};

const AnimationSprite ninja_girlFrame1Sprites[] = 
{
    { 4, 0, 0 },
    { 12, 1, 1 },
    { 4, 8, 2 },
    { 12, 8, 9 },
    { 3, 16, 10 },
    { 11, 16, 11 },
    { 19, 17, 12 },
    { 2, 24, 13 },
    { 10, 24, 14 },
    { 18, 24, 15 },
};


const AnimationFrame ninja_girlFrame0 = 
{
    ninja_girlFrame0Sprites,
    9, // number of sprites
    8, // frame time
};

const AnimationFrame ninja_girlFrame1 = 
{
    ninja_girlFrame1Sprites,
    10, // number of sprites
    8, // frame time
};
const AnimationFrame* const ninja_girlFrames[2] = 
{
    &ninja_girlFrame0,
    &ninja_girlFrame1,
};

const Animation ninja_girl = 
{
    (const AnimationFrame** const)ninja_girlFrames,
    (unsigned char* const)ninja_girlTileData, // start of the sprite data
    2, // number of frames
    24, // width in pixels
    32, // height in pixels
    16, // the total time of the animation
    16, // the total amount of tiles in animation
};
