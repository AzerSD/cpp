#ifndef __POINT_HPP__
# define __POINT_HPP__

# include "fixed.hpp"

class Point
{
private:
    const Fixed _x;
    const Fixed _y;

public:
    Point();
    Point( const float x, const float y );
    Point( const Point &src );
    ~Point();

    Point&  operator=( const Point &obj );

    Fixed getX( void ) const ;
    Fixed getY( void ) const ;
    
};

bool bsp( Point const a, Point const b, Point const c, Point const point );


bool bsp( Point const a, Point const b, Point const c, Point const point);

#endif /* __POINT_HPP */