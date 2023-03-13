#ifndef APP_H
#define APP_H
#include <iostream>
#include "Rect.h"

using namespace std;

class AppWindow : public Rect{

    
    protected:
    Rect rect ;
    
    public:
    
    AppWindow(){
        rect = Rect();

    }
    AppWindow( float x, float y, float w, float h ){// initialize member rect's dimensions with the 4 floats
        rect = Rect(x, y, w, h);

    } 
    AppWindow( const Rect& r ){ // initialize member rect's dimensions with r's dimensions
       rect = Rect(r.a, r.b, r.w, r.h);

    }
    const Rect& get_rect(){
        return rect;
    }
    virtual void resize(float w, float h){
            rect.w = w;
            rect.h = h;
        }

    };

    class CircleWin : public AppWindow{
        protected:
            float radius;
        public:
            CircleWin(){
                radius = 0;
            }

            CircleWin(float x, float y, float w, float h):AppWindow(x, y, w, h){
                if(w > h){
                    radius = w;
                }else{
                    radius = h;
                }
            }

        CircleWin( const Rect& r ):AppWindow(r){
                if(r.w > r.h){
                    radius = r.w;
                }else{
                    radius = r.h;
                }   
        }  

        void resize(float w, float h){
            rect.w = w;
            rect.h = h;
            if(w > h){
                    radius = w;
                }else{
                    radius = h;
                }
            cout << "radius: " << radius << endl;
        }
            
};

class RectWin : public AppWindow{
    protected:
        float area;
    public:
        RectWin(){
            area = 0;
        }

        RectWin(float x, float y, float w, float h):AppWindow(x, y, w, h){
            area = w * h;
        }

        RectWin( const Rect& r ):AppWindow(r){
            area = r.w * r.h;
        }

        void resize(float w, float h){
            rect.w = w;
            rect.h = h;
            area = w * h;

            cout << "area: " << area << endl;
        }
};



#endif