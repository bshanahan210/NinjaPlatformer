#include <SFML/Graphics.hpp>
#ifndef _Entity
    #include "Entity.hpp"
#endif

class Enemy : public Entity
{
    private:

    public:
        Enemy(sf::Texture *texture, float xMax, float yMax, float accel, int xSize, int ySize);
        ~Enemy();

        std::string getClass();

        void move();

        void animation();
};
