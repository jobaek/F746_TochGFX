/*********************************************************************************/
/********** THIS FILE IS GENERATED BY TOUCHGFX DESIGNER, DO NOT MODIFY ***********/
/*********************************************************************************/
#include <gui_generated/screen2_screen/Screen2ViewBase.hpp>
#include <touchgfx/Color.hpp>
#include "BitmapDatabase.hpp"

Screen2ViewBase::Screen2ViewBase() :
    buttonCallback(this, &Screen2ViewBase::buttonCallbackHandler)
{
    box1.setPosition(0, 0, 480, 272);
    box1.setColor(touchgfx::Color::getColorFrom24BitRGB(234, 237, 68));

    button1.setXY(155, 106);
    button1.setBitmaps(Bitmap(BITMAP_BLUE_BUTTONS_ROUND_EDGE_SMALL_ID), Bitmap(BITMAP_BLUE_BUTTONS_ROUND_EDGE_SMALL_PRESSED_ID));
    button1.setAction(buttonCallback);

    add(box1);
    add(button1);
}

void Screen2ViewBase::setupScreen()
{

}

void Screen2ViewBase::buttonCallbackHandler(const touchgfx::AbstractButton& src)
{
    if (&src == &button1)
    {
        //Interaction1
        //When button1 clicked change screen to Screen1
        //Go to Screen1 with screen transition towards West
        application().gotoScreen1ScreenSlideTransitionWest();
    }
}
