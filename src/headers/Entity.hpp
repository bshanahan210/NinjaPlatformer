#include <SFML/Graphics.hpp>
#include <SFML/Graphics/Texture.hpp>

#define _Entity

class Entity
{
    private:
        sf::Sprite sprite;
        sf::Texture *texture;
        float xVel;
        float yVel;
        float xMax;
        float yMax;
        float accel;
        int xSize;
        int ySize;
        float x;
        float y;

    public:
        //getter methods
        sf::Sprite *getSprite();
        float getXVel();
        float getYVel();
        float getXMax();
        float getYMax();
        float getAccel();
        int getXSize();
        int getYSize();
        sf::Texture *getTexture();
        float getX();
        float getY();

        //setter methods
        void setXVel(float x);
        void setYVel(float y);
        void setXMax(float x);
        void setYMax(float y);
        void setAccel(float a);
        void setXSize(int s);
        void setYSize(int s);
        void setTexture(sf::Texture *t);
        void setX(float v);
        void setY(float v);

        virtual std::string getClass();

        virtual void move();

        //methods that need to be implemented for every class that is derived from Entity
        virtual void animation(); //handles animation
};
