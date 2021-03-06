/**
 CSci-4611 Spring '14 Assignment #2 Pong 3D
 **/

#ifndef App_h
#define App_h
#include <cmath>
#include <G3D/G3DAll.h>

class App : public GApp {
public:
    
    App(const GApp::Settings& settings = GApp::Settings());
    
    virtual void onInit();
    
    
    virtual void onUserInput(UserInput *uinput);
    
    virtual void onSimulation(RealTime rdt, SimTime sdt, SimTime idt);
    
    virtual void onGraphics3D(RenderDevice* rd, Array< shared_ptr<Surface> >& surface);
    
    
    // Use these functions to access the current state of the paddle!
    Vector3 getPaddlePosition() { return paddleFrame.translation; }
    Vector3 getPaddleNormal() { return Vector3(0,0,-1); }
    Vector3 getPaddleVelocity() { return paddleVel; }
    
protected:
    
    // This CoordinateFrame stores position and rotation data for the paddle.
    CoordinateFrame paddleFrame;
    
    // This vector stores the paddle's current velocity.
    Vector3 paddleVel;
    Vector3 time;
    
//    double timeY;
//    double timeZ;
    
    static const double GRAVITY;
    static const double TABLE_RESTITUTION;
    static const double NET_RESTITUTION;
    static const double PADDLEX_RESTITUTION;
    static const double PADDLEZ_RESTITUTION;
    static const double BALL_MASS;
    static const double PADDLE_MASS;
    static const double BALL_RADIUS;
    
    virtual void resetBall() ;
    Vector3 ballPosition;
    Vector3 initPos;
    Vector3 initVel;
};

#endif
