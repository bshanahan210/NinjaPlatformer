#include "headers/Player.hpp"

/*
Constructor of Player class. Takes the following Parameters:
    -std::vector<sf::Texture> *textures: passes textures that will be used by player
    -float xMax: sets max speed in the x-axis for player
    -float yMax: sets max speed in the y-axis for player
    -float accel: sets acceleration rate for player

*/
Player::Player(std::vector<sf::Texture> *textures, float xMax, float yMax, float accel)
{   
    setTextures(textures);
    getSprite()->setTexture(textures->front()); //sets initial texture of sprite as the first texture in list
    setXVel(0.0f);
    setYVel(0.0f);
    setXMax(xMax);
    setYMax(yMax);
    setAccel(accel);
}

bool Player::getContactBottom()
{
    return contactBottom;
}

bool Player::getJumping()
{
    return jumping;
}

void Player::setJumping(bool b)
{
    jumping = b;
}

void Player::setContactBottom(bool b)
{
    contactBottom = b;
}

/*
Method is responsible for animating the player sprite. It uses the textures passed in the constructor.
It should have different animation for when character is at a stand-still compared to when it is moving.
*/
void Player::animation()
{

}