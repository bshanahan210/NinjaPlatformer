#include <SFML/Graphics.hpp>

#define _Entity

class Entity {
 private:
  sf::Sprite sprite;
  std::vector<sf::Texture> *textures;
  float xVel;
  float yVel;
  float xMax;
  float yMax;
  float accel;
  int xSize;
  int ySize;

 public:
  // getter methods
  sf::Sprite *getSprite();
  float getXVel();
  float getYVel();
  float getXMax();
  float getYMax();
  float getAccel();
  int getXSize();
  int getYSize();
  std::vector<sf::Texture> *getTextures();

  // setter methods
  void setXVel(float x);
  void setYVel(float y);
  void setXMax(float x);
  void setYMax(float y);
  void setAccel(float a);
  void setXSize(int s);
  void setYSize(int s);
  void setTextures(std::vector<sf::Texture> *t);

  virtual std::string getClass();

  virtual void move();

  // methods that need to be implemented for every class that is derived from
  // Entity
  virtual void animation();  // handles animation
};