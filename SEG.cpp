#include "Arduino.h"
#include "SEG.h"


SEG::SEG(int a, int b, int c, int d, int e, int f, int g){
    pinMode(a, OUTPUT);
    pinMode(b, OUTPUT);
    pinMode(c, OUTPUT);
    pinMode(d, OUTPUT);
    pinMode(e, OUTPUT);
    pinMode(f, OUTPUT);
    pinMode(g, OUTPUT);
    _a = a;
    _b = b;
    _c = c;
    _d = d;
    _e = e;
    _f = f;
    _g = g;

}

void SEG::_0(){
digitalWrite(_a,LOW);
digitalWrite(_b,LOW);
digitalWrite(_c,LOW);
digitalWrite(_d,LOW);
digitalWrite(_e,LOW);
digitalWrite(_f,LOW);
digitalWrite(_g,HIGH);
}

void SEG::_1(){
digitalWrite(_a,HIGH);
digitalWrite(_b,LOW);
digitalWrite(_c,LOW);
digitalWrite(_d,HIGH);
digitalWrite(_e,HIGH);
digitalWrite(_f,HIGH);
digitalWrite(_g,HIGH);
}

void SEG::_2(){
digitalWrite(_a,LOW);
digitalWrite(_b,LOW);
digitalWrite(_c,HIGH);
digitalWrite(_d,LOW);
digitalWrite(_e,LOW);
digitalWrite(_f,HIGH);
digitalWrite(_g,LOW);
}

void SEG::_3(){
digitalWrite(_a,LOW);
digitalWrite(_b,LOW);
digitalWrite(_c,LOW);
digitalWrite(_d,LOW);
digitalWrite(_e,HIGH);
digitalWrite(_f,HIGH);
digitalWrite(_g,LOW);
}

void SEG::_4(){
digitalWrite(_a,HIGH);
digitalWrite(_b,LOW);
digitalWrite(_c,LOW);
digitalWrite(_d,HIGH);
digitalWrite(_e,HIGH);
digitalWrite(_f,LOW);
digitalWrite(_g,LOW);
}

void SEG::_5(){
digitalWrite(_a,LOW);
digitalWrite(_b,HIGH);
digitalWrite(_c,LOW);
digitalWrite(_d,LOW);
digitalWrite(_e,HIGH);
digitalWrite(_f,LOW);
digitalWrite(_g,LOW);
}

void SEG::_6(){
digitalWrite(_a,LOW);
digitalWrite(_b,HIGH);
digitalWrite(_c,LOW);
digitalWrite(_d,LOW);
digitalWrite(_e,LOW);
digitalWrite(_f,LOW);
digitalWrite(_g,LOW);
}

void SEG::_7(){
digitalWrite(_a,LOW);
digitalWrite(_b,LOW);
digitalWrite(_c,LOW);
digitalWrite(_d,HIGH);
digitalWrite(_e,HIGH);
digitalWrite(_f,HIGH);
digitalWrite(_g,HIGH);
}

void SEG::_8(){
digitalWrite(_a,LOW);
digitalWrite(_b,LOW);
digitalWrite(_c,LOW);
digitalWrite(_d,LOW);
digitalWrite(_e,LOW);
digitalWrite(_f,LOW);
digitalWrite(_g,LOW);
}

void SEG::_9(){
digitalWrite(_a,LOW);
digitalWrite(_b,LOW);
digitalWrite(_c,LOW);
digitalWrite(_d,HIGH);
digitalWrite(_e,HIGH);
digitalWrite(_f,LOW);
digitalWrite(_g,LOW);
}

void SEG::_A(){
digitalWrite(_a,LOW);
digitalWrite(_b,LOW);
digitalWrite(_c,LOW);
digitalWrite(_d,HIGH);
digitalWrite(_e,LOW);
digitalWrite(_f,LOW);
digitalWrite(_g,LOW);
}

void SEG::_B(){
digitalWrite(_a,HIGH);
digitalWrite(_b,HIGH);
digitalWrite(_c,LOW);
digitalWrite(_d,LOW);
digitalWrite(_e,LOW);
digitalWrite(_f,LOW);
digitalWrite(_g,LOW);
}

void SEG::_C(){
digitalWrite(_a,LOW);
digitalWrite(_b,HIGH);
digitalWrite(_c,HIGH);
digitalWrite(_d,LOW);
digitalWrite(_e,LOW);
digitalWrite(_f,LOW);
digitalWrite(_g,LOW);
}

void SEG::_D(){
digitalWrite(_a,HIGH);
digitalWrite(_b,LOW);
digitalWrite(_c,LOW);
digitalWrite(_d,LOW);
digitalWrite(_e,LOW);
digitalWrite(_f,HIGH);
digitalWrite(_g,LOW);
}

void SEG::_E(){
digitalWrite(_a,LOW);
digitalWrite(_b,HIGH);
digitalWrite(_c,HIGH);
digitalWrite(_d,LOW);
digitalWrite(_e,LOW);
digitalWrite(_f,LOW);
digitalWrite(_g,LOW);
}

void SEG::_F(){
digitalWrite(_a,LOW);
digitalWrite(_b,HIGH);
digitalWrite(_c,HIGH);
digitalWrite(_d,HIGH);
digitalWrite(_e,LOW);
digitalWrite(_f,LOW);
digitalWrite(_g,LOW);
}