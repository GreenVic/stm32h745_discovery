/*********************************************************************************/
/********** THIS FILE IS GENERATED BY TOUCHGFX DESIGNER, DO NOT MODIFY ***********/
/*********************************************************************************/
#include <gui_generated/screen2_screen/Screen2ViewBase.hpp>
#include "BitmapDatabase.hpp"
#include <texts/TextKeysAndLanguages.hpp>
#include <touchgfx/Color.hpp>

Screen2ViewBase::Screen2ViewBase() :
    buttonCallback(this, &Screen2ViewBase::buttonCallbackHandler)
{
    tiledImage1.setBitmap(Bitmap(BITMAP_BLUE_TEXTURES_CONCRETE_SEAMLESS_ID));
    tiledImage1.setPosition(0, 0, 480, 272);
    tiledImage1.setOffset(0, 0);

    buttonWithIcon1.setXY(420, 0);
    buttonWithIcon1.setBitmaps(Bitmap(BITMAP_DARK_BUTTONS_ROUND_EDGE_ICON_BUTTON_ID), Bitmap(BITMAP_DARK_BUTTONS_ROUND_EDGE_ICON_BUTTON_PRESSED_ID), Bitmap(BITMAP_BLUE_ICONS_HOME_32_ID), Bitmap(BITMAP_BLUE_ICONS_HOME_32_ID));
    buttonWithIcon1.setIconXY(15, 16);
    buttonWithIcon1.setAction(buttonCallback);

    swipeContainer1.setXY(65, 11);

    swipeContainer1Page3.setPosition(0, 0, 340, 250);

    image3.setXY(95, 60);
    image3.setBitmap(Bitmap(BITMAP_AI4_ID));
    swipeContainer1Page3.add(image3);

    textArea1.setXY(110, 206);
    textArea1.setColor(touchgfx::Color::getColorFrom24BitRGB(0, 0, 0));
    textArea1.setLinespacing(0);
    textArea1.setTypedText(TypedText(T_SINGLEUSEID2));
    swipeContainer1Page3.add(textArea1);
    swipeContainer1.add(swipeContainer1Page3);

    swipeContainer1Page2.setPosition(0, 0, 340, 250);

    image1.setXY(95, 61);
    image1.setBitmap(Bitmap(BITMAP_AI2_ID));
    swipeContainer1Page2.add(image1);

    textArea1_1.setXY(110, 206);
    textArea1_1.setColor(touchgfx::Color::getColorFrom24BitRGB(0, 0, 0));
    textArea1_1.setLinespacing(0);
    textArea1_1.setTypedText(TypedText(T_SINGLEUSEID3));
    swipeContainer1Page2.add(textArea1_1);
    swipeContainer1.add(swipeContainer1Page2);

    swipeContainer1Page1.setPosition(0, 0, 340, 250);

    image2.setXY(95, 55);
    image2.setBitmap(Bitmap(BITMAP_AI3_ID));
    swipeContainer1Page1.add(image2);

    textArea1_1_1.setXY(115, 206);
    textArea1_1_1.setColor(touchgfx::Color::getColorFrom24BitRGB(0, 0, 0));
    textArea1_1_1.setLinespacing(0);
    textArea1_1_1.setTypedText(TypedText(T_SINGLEUSEID4));
    swipeContainer1Page1.add(textArea1_1_1);
    swipeContainer1.add(swipeContainer1Page1);

    swipeContainer1.setPageIndicatorBitmaps(Bitmap(BITMAP_BLUE_PAGEINDICATOR_DOT_INDICATOR_SMALL_NORMAL_ID), Bitmap(BITMAP_BLUE_PAGEINDICATOR_DOT_INDICATOR_SMALL_HIGHLIGHT_ID));
    swipeContainer1.setPageIndicatorXY(0, 0);
    swipeContainer1.setSwipeCutoff(50);
    swipeContainer1.setEndSwipeElasticWidth(50);
    swipeContainer1.setSelectedPage(0);

    add(tiledImage1);
    add(buttonWithIcon1);
    add(swipeContainer1);
}

void Screen2ViewBase::setupScreen()
{

}

void Screen2ViewBase::buttonCallbackHandler(const touchgfx::AbstractButton& src)
{
    if (&src == &buttonWithIcon1)
    {
        //Interaction1
        //When buttonWithIcon1 clicked change screen to Screen1
        //Go to Screen1 with screen transition towards West
        application().gotoScreen1ScreenSlideTransitionWest();
    }
}
