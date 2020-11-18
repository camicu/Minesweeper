/*********************************************************************************/
/********** THIS FILE IS GENERATED BY TOUCHGFX DESIGNER, DO NOT MODIFY ***********/
/*********************************************************************************/
#ifndef SPLASHVIEWBASE_HPP
#define SPLASHVIEWBASE_HPP

#include <gui/common/FrontendApplication.hpp>
#include <mvp/View.hpp>
#include <gui/splash_screen/SplashPresenter.hpp>
#include <touchgfx/widgets/Box.hpp>
#include <touchgfx/widgets/Image.hpp>
#include <touchgfx/widgets/TextArea.hpp>
#include <touchgfx/EasingEquations.hpp>
#include <touchgfx/mixins/FadeAnimator.hpp>

class SplashViewBase : public touchgfx::View<SplashPresenter>
{
public:
    SplashViewBase();
    virtual ~SplashViewBase() {}
    virtual void setupScreen();
    virtual void handleTickEvent();
    virtual void afterTransition();

protected:
    FrontendApplication& application() {
        return *static_cast<FrontendApplication*>(touchgfx::Application::getInstance());
    }

    /*
     * Member Declarations
     */
    touchgfx::Box __background;
    touchgfx::Box background;
    touchgfx::FadeAnimator< touchgfx::Image > usv;
    touchgfx::TextArea textArea1;
    touchgfx::TextArea textArea2;
    touchgfx::TextArea textArea3;

private:

    /*
     * Delay Variable Declarations
     */
    static const uint16_t INTERACTION1_DURATION = 180;
    uint16_t interaction1Counter;
    /*
     * Interaction Callback Declarations
     */
    touchgfx::Callback < SplashViewBase, const touchgfx::FadeAnimator<touchgfx::Image>& >  interaction2EndedCallback;


    /*
     * Interaction Handlers
     */
    void interaction2EndedCallbackHandler(const touchgfx::FadeAnimator<touchgfx::Image>& comp);

};

#endif // SPLASHVIEWBASE_HPP
