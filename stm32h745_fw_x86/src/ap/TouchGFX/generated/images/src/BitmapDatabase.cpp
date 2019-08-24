// -alpha_dither yes -dither 2 -non_opaque_image_format ARGB8888 -opaque_image_format RGB888 0x91392652
// Generated by imageconverter. Please, do not edit!

#include <touchgfx/Bitmap.hpp>
#include <BitmapDatabase.hpp>

#ifndef NO_USING_NAMESPACE_TOUCHGFX
using namespace touchgfx;
#endif

extern const unsigned char _ai1[];
extern const unsigned char _blue_buttons_round_edge_icon_button[];
extern const unsigned char _blue_buttons_round_edge_icon_button_pressed[];
extern const unsigned char _blue_buttons_round_icon_button[];
extern const unsigned char _blue_buttons_round_icon_button_pressed[];
extern const unsigned char _blue_buttons_square_icon_button[];
extern const unsigned char _blue_buttons_square_icon_button_pressed[];
extern const unsigned char _blue_icons_home_32[];
extern const unsigned char _blue_radio_buttons_radio_round_button_active[];
extern const unsigned char _blue_radio_buttons_radio_round_button_normal[];
extern const unsigned char _blue_radio_buttons_radio_round_button_pressed[];

const touchgfx::Bitmap::BitmapData bitmap_database[] =
{
    { _ai1, 0, 300, 129, 0, 0, 300, 129, touchgfx::Bitmap::RGB888 },
    { _blue_buttons_round_edge_icon_button, 0, 60, 60, 7, 6, 46, 46, touchgfx::Bitmap::ARGB8888 },
    { _blue_buttons_round_edge_icon_button_pressed, 0, 60, 60, 7, 6, 46, 46, touchgfx::Bitmap::ARGB8888 },
    { _blue_buttons_round_icon_button, 0, 60, 60, 13, 11, 34, 36, touchgfx::Bitmap::ARGB8888 },
    { _blue_buttons_round_icon_button_pressed, 0, 60, 60, 13, 11, 34, 36, touchgfx::Bitmap::ARGB8888 },
    { _blue_buttons_square_icon_button, 0, 60, 60, 5, 4, 50, 50, touchgfx::Bitmap::ARGB8888 },
    { _blue_buttons_square_icon_button_pressed, 0, 60, 60, 5, 4, 50, 50, touchgfx::Bitmap::ARGB8888 },
    { _blue_icons_home_32, 0, 30, 29, 23, 9, 3, 20, touchgfx::Bitmap::ARGB8888 },
    { _blue_radio_buttons_radio_round_button_active, 0, 44, 44, 9, 8, 26, 28, touchgfx::Bitmap::ARGB8888 },
    { _blue_radio_buttons_radio_round_button_normal, 0, 44, 44, 9, 8, 26, 28, touchgfx::Bitmap::ARGB8888 },
    { _blue_radio_buttons_radio_round_button_pressed, 0, 44, 44, 9, 8, 26, 28, touchgfx::Bitmap::ARGB8888 }
};

namespace BitmapDatabase
{
const touchgfx::Bitmap::BitmapData* getInstance()
{
    return bitmap_database;
}
uint16_t getInstanceSize()
{
    return (uint16_t)(sizeof(bitmap_database) / sizeof(touchgfx::Bitmap::BitmapData));
}
}

