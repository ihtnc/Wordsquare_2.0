#include "pebble.h"
	
#define ROWS 10
#define COLS 11
#define FONT_H 18
#define FONT_W 12
#define FONT_ON		RESOURCE_ID_FONT_SOURCECODEPRO_BLACK_20
#define FONT_OFF	RESOURCE_ID_FONT_SOURCECODEPRO_LIGHT_20

#define LAYER_FIVE		13
#define LAYER_TEN		14
#define LAYER_QUARTER	15
#define LAYER_HALF		16
#define LAYER_TWENTY	17
#define LAYER_IT	 	0
#define LAYER_IS		18
#define LAYER_PAST		19
#define LAYER_TO		20
#define LAYER_OCLOCK	21
#define LAYER_A			22
#define LAYER_BT		23
#define LAYER_BT_ON		24
#define LAYER_BT_OFF	25
#define LAYER_BATTERY_25	26
#define LAYER_BATTERY_50	27
#define LAYER_BATTERY_75	28
#define LAYER_BATTERY_100	29
#define LAYER_FILLER	30

typedef struct
{
	int row;
	int col;
	char text_on[8];
	char text_off[8];
} word_t;

#define WORD_COUNT ((sizeof(words) / sizeof(*words)))
	
#define SCREEN_HEIGHT 168
#define SCREEN_WIDTH 144