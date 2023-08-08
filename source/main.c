#include <stdio.h>
#include "SMSlib.h"
#include "ninja_girl.h"
#include "test_background.h"

unsigned char globalPalette[16] = 
{
 0x00 , 0x01 , 0x10 , 0x15 , 0x06 , 0x04 , 0x17 , 0x15 , 0x39 , 0x0B , 0x2A , 0x09 , 0x2B , 0x3D , 0x1F , 0x3F
};


void Animation_DrawFrame(const AnimationFrame* frame, short x, short y)
{
	char loop = frame->numSprites;
	const AnimationSprite* currentSprite = frame->sprites;

	while (loop--)
	{
		SMS_addSprite(x + currentSprite->xOffset, y + currentSprite->yOffset, currentSprite->tileIndex);
		currentSprite++;
	}

}
typedef struct
{
	short x;
	short y;
	const Animation* animation;
	unsigned char animationVdpTileIndex;
	const AnimationFrame* currentAnimationFrame;
	unsigned char currentAnimationFrameIndex;
	unsigned char animationTime;
} GameObject;

void GameObject_Update(GameObject* gameObject)
{
	gameObject->x++;
	gameObject->x %= 255;

	if (gameObject->animationTime == gameObject->currentAnimationFrame->frameTime)
	{
		gameObject->currentAnimationFrameIndex++;

		if (gameObject->currentAnimationFrameIndex == gameObject->animation->numFrames)
			gameObject->currentAnimationFrameIndex = 0;

		gameObject->currentAnimationFrame = gameObject->animation->frames[gameObject->currentAnimationFrameIndex];
		gameObject->animationTime = 0;
	}

	Animation_DrawFrame(gameObject->currentAnimationFrame, gameObject->x, gameObject->y);

	gameObject->animationTime++;
}

unsigned char ScrollManager_horizontalScroll = 0;

// hard-coded column when we need to show more of the map. Replace
// this with an actual larger map.
unsigned short column[] =
{
	0, 1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1
};

void ScrollManager_Update()
{
	if (ScrollManager_horizontalScroll % 8 == 0)
	{
		unsigned char tilePos = ScrollManager_horizontalScroll >> 3;

		SMS_loadTileMapColumn((32 - tilePos) & 31, 0, column, 24);
	}

	ScrollManager_horizontalScroll--;
}

void main(void)
{
  /* Clear VRAM */
  SMS_VRAMmemsetW(0, 0x0000, 16384);

  SMS_loadBGPalette(globalPalette);
  SMS_loadSpritePalette(globalPalette);
  
  // load tiles from Animation
  SMS_loadTiles(ninja_girl.tileData, 256, ninja_girl.totalTileCount * 32);
  SMS_loadTiles(backgroundTileset, 0, 2 * 32);
  

  GameObject player;
  player.x = 122;
  player.y = 88;
  player.animation = &ninja_girl;
  player.currentAnimationFrameIndex = 0;
  player.currentAnimationFrame = ninja_girl.frames[player.currentAnimationFrameIndex];
  player.animationTime = 0;
  player.animationVdpTileIndex = 0;

  SMS_loadTileMap(0, 0, smallBackgroundMap, sizeof(smallBackgroundMap));

  SMS_VDPturnOnFeature(VDPFEATURE_LEFTCOLBLANK);

  /* Turn on the display */
  SMS_displayOn();
  SMS_waitForVBlank ();

  // infinite loop
  for(;;) 
  { 
	  SMS_initSprites();
	  GameObject_Update(&player);
	  ScrollManager_Update();
	  SMS_waitForVBlank ();

	  SMS_setBGScrollX(ScrollManager_horizontalScroll);
	  SMS_copySpritestoSAT();
  }
}

SMS_EMBED_SEGA_ROM_HEADER(9999,0);
SMS_EMBED_SDSC_HEADER_AUTO_DATE(1,0,"raphnet","basic example","A simple example");
