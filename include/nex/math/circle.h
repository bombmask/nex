#ifndef CIRCLE_H_INCLUDE
#define CIRCLE_H_INCLUDE

#include <nex/system/typedefs.h>
#include <nex/math/vec2.h>
#include <nex/math/rect.h>

namespace nx
{

class Circle
{
public:

    /**
     * @brief Create a circle with all values set to zero.
     */
    Circle();

    /**
     * @brief Create a circle with the specified values.
     * @param center = The center of the circle.
     * @param radius = The radius of the circle.
     */
    Circle(vec2f center, real32 radius);

    /**
     * @brief Check if a circle intersects with a rectangle.
     * @param circle = The circle.
     * @param rect = The rectangle.
     * @return true if they intersects.
     */
    static bool intersects(const Circle& circle, const rectf& rect);

    /**
     * @brief Check if a circle intersects with a rectangle.
     * @param center = The center of the circle.
     * @param radius = The radius of the circle.
     * @param rect = The rectangle to check collision with.
     * @return true if they intersects.
     */
    static bool intersects(const vec2f& center, const real32 radius, const rectf& rect);

    /**
     * @brief Check if two circles are intersecting.
     * @param circleA = The center point of the first circle.
     * @param radiusA = The radius of the first circle.
     * @param circleB = The center point of the second circle.
     * @param radiusB = The radius of the second tool.
     * @return true if the circles intersect.
     */
    static bool intersects(const vec2f& circleA, const real32 radiusA, const vec2f& circleB, const real32 radiusB);

    /**
     * @brief The radius of the circle.
     */
    real32 radius;

    /**
     * @brief center
     */
    vec2f center;
};

} // namespace nx

#endif // CIRCLE_H_INCLUDE
