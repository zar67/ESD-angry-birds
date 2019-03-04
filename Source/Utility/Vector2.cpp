#include "Vector2.h"
#include <math.h>

/**
 *   @brief   Constructor.
 *   @details Requires values for it's x and y magnitudes.
 *   @return  void
 */
vector2::vector2(float x_, float y_) : x(x_), y(y_) {}

/**
 *   @brief   Copies a vector.
 *   @details Constructs a new vector2 from an existing.
 *   @return  void
 */
vector2::vector2(const vector2& rhs)
{
  this->x = rhs.x;
  this->y = rhs.y;
}

/**
 *   @brief   Resets the vector
 *   @details Will set the x and y values to the values given by the parameters
 *   @return  void
 */
void vector2::setAs(float x_, float y_)
{
  x = x_;
  y = y_;
}

/**
 *   @brief   Increases the vector
 *   @details Will increase the x and y values by the values given by the
 * parameters
 *   @return  void
 */
void vector2::increaseBy(float x_, float y_)
{
  x += x_;
  y += y_;
}

/**
 *   @brief   Scales the vector
 *   @details Will scale the x and y values by the values given by the
 * parameters
 *   @return  void
 */
void vector2::multiplyBy(float x_, float y_)
{
  x *= x_;
  y *= y_;
}

/**
 *   @brief   Normalises vector.
 *   @details Turns the vector into a unit vector.
 *   @return  void
 */
void vector2::normalise()
{
  float magnitude = sqrtf((x * x) + (y * y));

  if (!magnitude)
    return;

  x /= magnitude;
  y /= magnitude;
}

/**
 *   @brief   Cross Product
 *   @details Will get the scalar cross product of this vector and the one given
 * in the parameter
 *   @return  The scalar
 */
float vector2::crossProduct(vector2 v)
{
  return (x * v.y) - (y * v.x);
}
