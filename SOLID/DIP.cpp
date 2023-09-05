#include<iostream>
#include<string>
using namespace std;

// the below are concrete classes
class WiredKeyBoard{

};
class WiredMouse{

};
class BlueToothKeyBoard{

};
class BlueToothMouse{

};

// in the below code the keyboard is assigned for wiredkeyboard only
// ie we are making the macbook to be using only wired devices, hence we are depending
// on concrete classes rather than ABC or interfaces (
// making it general which can accept any kind of keyboard/mouse)
//  
class MacBook
{
    WiredKeyBoard *KeyBoard;
    WiredMouse *Mouse;
public:
    MacBook(){
        KeyBoard = new WiredKeyBoard();
        Mouse = new WiredMouse();
    }
};

//now changing the MACBOOK class as follows

// create interface/ABC for KB which can have BT/wired
class KeyBoard{
    string type; // defines wired/BT
public:
    KeyBoard(string t) { this->type = t; }
};

// create interface/ABC for mouse which can have BT/wired
class Mouse{
    string type; // defines wired/BT
public:
    Mouse(string t) { this->type = t; }
};

// now the macbook is suitable for either of the combination
// macbook is now depending on the ABC/interface
class MacBookNew{
    KeyBoard *KBtype;
    Mouse *Mousetype;
public:
    MacBookNew(KeyBoard *kb, Mouse *m){
        this->KBtype = kb;
        this->Mousetype = m;
    }
};