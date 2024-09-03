/*********************************************************************************/
/********** THIS FILE IS GENERATED BY TOUCHGFX DESIGNER, DO NOT MODIFY ***********/
/*********************************************************************************/
#include <gui_generated/sport_screen/SportViewBase.hpp>
#include <touchgfx/canvas_widget_renderer/CanvasWidgetRenderer.hpp>
#include <touchgfx/Color.hpp>
#include <images/BitmapDatabase.hpp>
#include <texts/TextKeysAndLanguages.hpp>

SportViewBase::SportViewBase()
{
    touchgfx::CanvasWidgetRenderer::setupBuffer(canvasBuffer, CANVAS_BUFFER_SIZE);
    
    __background.setPosition(0, 0, 800, 480);
    __background.setColor(touchgfx::Color::getColorFromRGB(0, 0, 0));
    add(__background);

    image3.setXY(78, 134);
    image3.setBitmap(touchgfx::Bitmap(BITMAP_ASSET_45_ID));
    add(image3);

    image2_1_1.setXY(426, 181);
    image2_1_1.setBitmap(touchgfx::Bitmap(BITMAP_ASSET_30_ID));
    add(image2_1_1);

    image2_1.setXY(360, 182);
    image2_1.setBitmap(touchgfx::Bitmap(BITMAP_ASSET_32_ID));
    add(image2_1);

    image2.setXY(393, 190);
    image2.setBitmap(touchgfx::Bitmap(BITMAP_ASSET_31_ID));
    add(image2);

    image1.setXY(77, 134);
    image1.setBitmap(touchgfx::Bitmap(BITMAP_ASSET_46_ID));
    add(image1);

    animatedImage1.setXY(267, 148);
    animatedImage1.setBitmaps(BITMAP_ASSET_36_R_ID, BITMAP_ASSET_36_R_ON_ID);
    animatedImage1.setUpdateTicksInterval(1);
    animatedImage1.startAnimation(false, true, false);
    add(animatedImage1);

    animatedImage1_1.setXY(489, 148);
    animatedImage1_1.setBitmaps(BITMAP_ASSET_36_ID, BITMAP_ASSET_36_ON_ID);
    animatedImage1_1.setUpdateTicksInterval(1);
    animatedImage1_1.startAnimation(false, true, false);
    add(animatedImage1_1);

    imageProgress1.setXY(567, 325);
    imageProgress1.setProgressIndicatorPosition(0, 0, 300, 10);
    imageProgress1.setRange(0, 100);
    imageProgress1.setDirection(touchgfx::AbstractDirectionProgress::RIGHT);
    imageProgress1.setBackground(touchgfx::Bitmap(BITMAP_ASSET_38_ID));
    imageProgress1.setBitmap(BITMAP_ASSET_37_ID);
    imageProgress1.setValue(13);
    imageProgress1.setAnchorAtZero(true);
    add(imageProgress1);

    imageProgress1_1.setXY(424, 273);
    imageProgress1_1.setProgressIndicatorPosition(0, 0, 300, 10);
    imageProgress1_1.setRange(0, 100);
    imageProgress1_1.setDirection(touchgfx::AbstractDirectionProgress::RIGHT);
    imageProgress1_1.setBackground(touchgfx::Bitmap(BITMAP_ASSET_38_L_ID));
    imageProgress1_1.setBitmap(BITMAP_ASSET_37_L_ID);
    imageProgress1_1.setValue(9);
    imageProgress1_1.setAnchorAtZero(true);
    add(imageProgress1_1);

    textArea1.setXY(559, 325);
    textArea1.setColor(touchgfx::Color::getColorFromRGB(255, 255, 255));
    textArea1.setLinespacing(0);
    textArea1.setTypedText(touchgfx::TypedText(T___SINGLEUSE_HG5Z));
    add(textArea1);

    textArea1_1.setXY(632, 325);
    textArea1_1.setColor(touchgfx::Color::getColorFromRGB(255, 255, 255));
    textArea1_1.setLinespacing(0);
    textArea1_1.setTypedText(touchgfx::TypedText(T___SINGLEUSE_511N));
    add(textArea1_1);

    textArea1_1_1.setXY(223, 325);
    textArea1_1_1.setColor(touchgfx::Color::getColorFromRGB(255, 255, 255));
    textArea1_1_1.setLinespacing(0);
    textArea1_1_1.setTypedText(touchgfx::TypedText(T___SINGLEUSE_W0Y8));
    add(textArea1_1_1);

    textArea1_2.setXY(150, 325);
    textArea1_2.setColor(touchgfx::Color::getColorFromRGB(255, 255, 255));
    textArea1_2.setLinespacing(0);
    textArea1_2.setTypedText(touchgfx::TypedText(T___SINGLEUSE_B8VS));
    add(textArea1_2);

    scalableImage2.setBitmap(touchgfx::Bitmap(BITMAP_ASSET_44_ID));
    scalableImage2.setPosition(129, 138, 188, 188);
    scalableImage2.setScalingAlgorithm(touchgfx::ScalableImage::NEAREST_NEIGHBOR);
    add(scalableImage2);

    scalableImage2_1.setBitmap(touchgfx::Bitmap(BITMAP_ASSET_44_ID));
    scalableImage2_1.setPosition(489, 138, 188, 188);
    scalableImage2_1.setScalingAlgorithm(touchgfx::ScalableImage::NEAREST_NEIGHBOR);
    add(scalableImage2_1);

    gauge1.setBackground(touchgfx::Bitmap(BITMAP_ASSET_47_ID));
    gauge1.setPosition(230, 156, 83, 167);
    gauge1.setCenter(120, 120);
    gauge1.setStartEndAngle(-189.5f, -104.9f);
    gauge1.setRange(0, 100);
    gauge1.setValue(83.4f);
    gauge1.setNeedle(BITMAP_BATTERY1_ID, 7, 67);
    gauge1.setMovingNeedleRenderingAlgorithm(touchgfx::TextureMapper::BILINEAR_INTERPOLATION);
    gauge1.setSteadyNeedleRenderingAlgorithm(touchgfx::TextureMapper::BILINEAR_INTERPOLATION);
    gauge1.setArcVisible();
    gauge1Painter.setBitmap(touchgfx::Bitmap(BITMAP_ASSET_39_ID));
    gauge1.getArc().setPainter(gauge1Painter);
    gauge1.getArc().setRadius(160);
    gauge1.getArc().setLineWidth(444);
    gauge1.getArc().setCapPrecision(10);
    gauge1.setArcPosition(0, 0, 83, 167);
    add(gauge1);

    gauge1_1.setBackground(touchgfx::Bitmap(BITMAP_ASSET_47_R_ID));
    gauge1_1.setPosition(494, 156, 83, 167);
    gauge1_1.setCenter(120, 120);
    gauge1_1.setStartEndAngle(-189.5f, -104.9f);
    gauge1_1.setRange(0, 100);
    gauge1_1.setValue(86.6f);
    gauge1_1.setNeedle(BITMAP_BATTERY1_ID, 7, 67);
    gauge1_1.setMovingNeedleRenderingAlgorithm(touchgfx::TextureMapper::BILINEAR_INTERPOLATION);
    gauge1_1.setSteadyNeedleRenderingAlgorithm(touchgfx::TextureMapper::BILINEAR_INTERPOLATION);
    gauge1_1.setArcVisible();
    gauge1_1Painter.setBitmap(touchgfx::Bitmap(BITMAP_ASSET_52_R_ID));
    gauge1_1.getArc().setPainter(gauge1_1Painter);
    gauge1_1.getArc().setRadius(160);
    gauge1_1.getArc().setLineWidth(444);
    gauge1_1.getArc().setCapPrecision(10);
    gauge1_1.setArcPosition(0, 0, 83, 167);
    add(gauge1_1);

    textProgress1_1_1.setXY(113, 195);
    textProgress1_1_1.setProgressIndicatorPosition(66, -5, 98, 190);
    textProgress1_1_1.setRange(0, 100);
    textProgress1_1_1.setColor(touchgfx::Color::getColorFromRGB(255, 255, 255));
    textProgress1_1_1.setTypedText(touchgfx::TypedText(T___SINGLEUSE_7DXU));
    textProgress1_1_1.setBackground(touchgfx::Bitmap(BITMAP_TRANSPARENCY500_ID));
    textProgress1_1_1.setValue(60);
    add(textProgress1_1_1);

    textArea2_1_1.setXY(203, 248);
    textArea2_1_1.setColor(touchgfx::Color::getColorFromRGB(94, 0, 0));
    textArea2_1_1.setLinespacing(0);
    textArea2_1_1.setTypedText(touchgfx::TypedText(T___SINGLEUSE_L103));
    add(textArea2_1_1);

    textArea2_1.setXY(570, 251);
    textArea2_1.setColor(touchgfx::Color::getColorFromRGB(94, 0, 0));
    textArea2_1.setLinespacing(0);
    textArea2_1.setTypedText(touchgfx::TypedText(T___SINGLEUSE_LNGA));
    add(textArea2_1);

    textProgress1_1.setXY(480, 198);
    textProgress1_1.setProgressIndicatorPosition(66, -5, 98, 190);
    textProgress1_1.setRange(0, 100);
    textProgress1_1.setColor(touchgfx::Color::getColorFromRGB(255, 255, 255));
    textProgress1_1.setTypedText(touchgfx::TypedText(T___SINGLEUSE_V9SA));
    textProgress1_1.setBackground(touchgfx::Bitmap(BITMAP_TRANSPARENCY500_ID));
    textProgress1_1.setValue(90);
    add(textProgress1_1);

    scalableImage1.setBitmap(touchgfx::Bitmap(BITMAP_ASSET_44_ID));
    scalableImage1.setPosition(270, 228, 261, 207);
    scalableImage1.setScalingAlgorithm(touchgfx::ScalableImage::NEAREST_NEIGHBOR);
    scalableImage1.setAlpha(137);
    add(scalableImage1);

    digitalClock1.setPosition(350, 323, 100, 33);
    digitalClock1.setColor(touchgfx::Color::getColorFromRGB(255, 255, 255));
    digitalClock1.setTypedText(touchgfx::TypedText(T___SINGLEUSE_Y8JO));
    digitalClock1.displayLeadingZeroForHourIndicator(true);
    digitalClock1.setDisplayMode(touchgfx::DigitalClock::DISPLAY_24_HOUR_NO_SECONDS);
    digitalClock1.setTime24Hour(23, 59, 0);
    add(digitalClock1);
}

SportViewBase::~SportViewBase()
{
    touchgfx::CanvasWidgetRenderer::resetBuffer();
}

void SportViewBase::setupScreen()
{

}
