#pragma once


// Undef and redefine default brightness to half of 255
//#undef RGBLIGHT_LIMIT_VAL
//#define RGBLIGHT_LIMIT_VAL 32

// Enable Light Layers implementation
#define RGBLIGHT_LAYERS
#define RGBLIGHT_EFFECT_BREATHE_CENTER 1
// Allow Light Layers to override RGB off configuration
#define RGBLIGHT_LAYERS_OVERRIDE_RGB_OFF
