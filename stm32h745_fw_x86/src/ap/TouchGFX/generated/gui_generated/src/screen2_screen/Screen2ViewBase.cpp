/*********************************************************************************/
/********** THIS FILE IS GENERATED BY TOUCHGFX DESIGNER, DO NOT MODIFY ***********/
/*********************************************************************************/
#include <gui_generated/screen2_screen/Screen2ViewBase.hpp>
#include <touchgfx/Color.hpp>
#include "BitmapDatabase.hpp"
#include <texts/TextKeysAndLanguages.hpp>

Screen2ViewBase::Screen2ViewBase() :
    buttonCallback(this, &Screen2ViewBase::buttonCallbackHandler)
{
    box1.setPosition(0, 0, 480, 272);
    box1.setColor(touchgfx::Color::getColorFrom24BitRGB(255, 255, 255));

    buttonWithIcon1.setXY(420, 0);
    buttonWithIcon1.setBitmaps(Bitmap(BITMAP_BLUE_BUTTONS_SQUARE_ICON_BUTTON_ID), Bitmap(BITMAP_BLUE_BUTTONS_SQUARE_ICON_BUTTON_PRESSED_ID), Bitmap(BITMAP_BLUE_ICONS_HOME_32_ID), Bitmap(BITMAP_BLUE_ICONS_HOME_32_ID));
    buttonWithIcon1.setIconXY(15, 16);
    buttonWithIcon1.setAction(buttonCallback);

    button1.setXY(66, 106);
    button1.setBitmaps(Bitmap(BITMAP_BLUE_BUTTONS_ROUND_ICON_BUTTON_ID), Bitmap(BITMAP_BLUE_BUTTONS_ROUND_ICON_BUTTON_PRESSED_ID));

    radioButton1.setXY(432, 223);
    radioButton1.setBitmaps(Bitmap(BITMAP_BLUE_RADIO_BUTTONS_RADIO_ROUND_BUTTON_PRESSED_ID), Bitmap(BITMAP_BLUE_RADIO_BUTTONS_RADIO_ROUND_BUTTON_PRESSED_ID), Bitmap(BITMAP_BLUE_RADIO_BUTTONS_RADIO_ROUND_BUTTON_ACTIVE_ID), Bitmap(BITMAP_BLUE_RADIO_BUTTONS_RADIO_ROUND_BUTTON_NORMAL_ID));
    radioButton1.setSelected(false);
    radioButton1.setDeselectionEnabled(false);

    textArea1.setXY(396, 233);
    textArea1.setColor(touchgfx::Color::getColorFrom24BitRGB(0, 0, 0));
    textArea1.setLinespacing(0);
    textArea1.setTypedText(TypedText(T_SINGLEUSEID1));

    button2.setXY(288, 106);
    button2.setBitmaps(Bitmap(BITMAP_BLUE_BUTTONS_ROUND_EDGE_ICON_BUTTON_ID), Bitmap(BITMAP_BLUE_BUTTONS_ROUND_EDGE_ICON_BUTTON_PRESSED_ID));

    box2.setPosition(122, 209, 50, 50);
    box2.setColor(touchgfx::Color::getColorFrom24BitRGB(255, 255, 255));

    boxWithBorder1.setPosition(140, 234, 32, 27);
    boxWithBorder1.setVisible(false);
    boxWithBorder1.setColor(touchgfx::Color::getColorFrom24BitRGB(250, 50, 0));
    boxWithBorder1.setBorderColor(touchgfx::Color::getColorFrom24BitRGB(0, 0, 0));
    boxWithBorder1.setBorderSize(2);

    boxWithBorder1_1.setPosition(224, 234, 32, 27);
    boxWithBorder1_1.setVisible(false);
    boxWithBorder1_1.setColor(touchgfx::Color::getColorFrom24BitRGB(250, 50, 0));
    boxWithBorder1_1.setBorderColor(touchgfx::Color::getColorFrom24BitRGB(0, 0, 0));
    boxWithBorder1_1.setBorderSize(2);

    add(box1);
    add(buttonWithIcon1);
    add(button1);
    add(radioButton1);
    add(textArea1);
    add(button2);
    add(box2);
    add(boxWithBorder1);
    add(boxWithBorder1_1);
    radioButtonGroup.add(radioButton1);
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
    else if (&src == &button1)
    {

    }
    else if (&src == &button2)
    {

    }
}
