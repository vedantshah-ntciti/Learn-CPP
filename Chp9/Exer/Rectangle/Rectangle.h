#ifndef RECTANGLE_H
#define RECTANGLE_H

class Rectangle
{
    public:
        explicit Rectangle(float = 1, float = 1);

        void setParameter(float , float);
        
        void setLength(float);
        void setBreadth(float);

        float getPerimeter() const;
        float getArea() const;

        float getLength() const;
        float getBreadth() const;

    private:
        float length;
        float breadth;
};

#endif