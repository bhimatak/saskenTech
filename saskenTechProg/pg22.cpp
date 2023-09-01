#include <iostream>
#include <vector>

using namespace std;

class Shape{
    public:
        virtual void draw() const = 0;
        virtual ~Shape(){}
};

class Rect:public Shape
{
    public:
        virtual void draw() const{ cout<<"Rect"<<endl; }
};

class Elipse: public Shape
{
    public:
        virtual void draw() const{ cout<<"Elipse"<<endl; }
};

class Square: public Rect
{
    public:
        virtual void draw() const{ cout<<"Square"<<endl; }
};


Shape *RandShape(){
    switch (rand()%4)
    {
        case 0:
            return new Rect();
        case 1:
        case 2:
            return new Elipse();  
        case 3:
            return new Square();
    default:
        break;
    }
    return nullptr;
}

vector<Shape *> RandShape(int num)
{
    vector <Shape *> v;
    for (int i=0;i<num;i++)
    {
        v.push_back(RandShape());
    }
    return v;
}

vector<Rect *>getRects(vector<Shape *>&all)
{
    vector<Rect *>v;
    for(int i=0;i<all.size();i++)
    {
        // cout<<typeid(all[i]).name()<<endl;
        // cout<<typeid(*(all[i])).name()<<endl;
        /*
        if(typeid(*(all[i])) == typeid(Rect))
        {
            v.push_back(dynamic_cast<Rect *>(all[i]));
        }*/
        
        //check with even static_cast
        
        Rect *r = static_cast<Rect *>(all[i]);
        if (r != nullptr)
            v.push_back(r);
    }

    return v;
}

int main()
{
    vector<Shape*> all = RandShape(17);

    vector<Rect*> rects = getRects(all);
    
    for(int i=0;i<rects.size();i++)
        rects[i]->draw();
    
    for(int i=0;i<all.size();i++)
        delete all[i];
    return 0;
}