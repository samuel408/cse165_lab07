#ifndef RECT_H
#define RECT_H
#include <iostream>
using namespace std;



class Rect {
    public:
        float a, b, w, h;

        Rect(){
            a = 0.0f;
            b = 0.0f;
            w = 0.0f;
            h = 0.0f;
        }

        Rect(float x, float y, float c, float d){
            a = x;
            b = y;
            w = c;
            h = d;
        }
       
        bool contains(float f1,float f2){
            float X = f1;
            float Y = f2;
            float xdis = a + w;
            float ydis = b - h; 

            if(X >= a && X <= xdis){
                if(Y <= b && Y >= ydis){
                    return true;
                }else{
                    return false;
                }
            }else{
                return false;
            }
        }
};
#endif