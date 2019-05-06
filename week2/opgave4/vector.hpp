#ifndef VECTOR_HPP
#define VECTOR_HPP

#include <ostream>
#include <iomanip>

/// @file

/// \brief
/// vector ADT
/// \details
/// This is an ADT that implements vector values.
/// The x and y are stored as two (signed) integers.
/// The appropriate constructors and operators are provided.
class vector {
private:
   int x;
   int y;
   
public:

    /// \brief
    /// constructor from explicit values
    /// \details
    /// This constructor initializes a vector from x and y
    /// The default values for x is 13 and y is 3
    vector( int x = 13, int y = 3 ):
        x( x ), y( y )
    {}

    /// \brief
    /// compare two vector values
    /// \details
    /// This operator tests for equality. It returns true
    /// if and only if the counter and denminator of both
    /// operands are equal.
    bool operator==( const vector & rhs ) const {
        return ( x == rhs.x ) && ( y == rhs.y );
    }

    /// \brief
    /// output operator for a initialised vector values
    /// \details
    /// This operator<< prints a constructor in the format
    /// [x/y] where both values are printed as decimal values.
    friend std::ostream & operator<<( std::ostream & lhs, const vector & rhs ){
        std::cout << "[" << rhs.x << "/" << rhs.y << "]" << std::endl << std::endl;
        return lhs << "[" << rhs.x << "/" << rhs.y << "]";
    }

    /// \brief
    /// add a vector by an integer
    /// details
    /// This operator+ adds a vector value to an interger
    vector operator+( const int & rhs ) const {
        return vector(
            x + rhs,
            y + rhs
        );
    }

    /// \brief
    /// add a vector by an vector
    /// details
    /// This operator+ adds a vector value to a vector
    vector operator+( const vector & rhs ) const {
        return vector(
            x + rhs.x,
            y + rhs.y
        );
    }

    /// \brief
    /// adds a vector into an integer
    /// details
    /// This operator+= adds a vector into an interger
    vector & operator+=( const int & rhs ){
        x = x + rhs;
        y = y + rhs;
        return *this;
    }

    /// \brief
    /// adds a vector into an vector
    /// details
    /// This operator+= adds a vector into an vector
    vector & operator+=( const vector & rhs ){
        x = x + rhs.x;
        y = y + rhs.y;
        return *this;
    }

    /// \brief
    /// multiply a vector by an integer
    /// details
    /// This operator* multiplies a vector value by an interger
    vector operator*( const int & rhs ) const {
        return vector(
            x * rhs,
            y * rhs
        );
    }

    /// \brief
    /// multiply a vector by an vector
    /// details
    /// This operator* multiplies a vector value by a vector
    vector operator*( const vector & rhs ) const {
        return vector(
            x * rhs.x,
            y * rhs.y
        );
    }

    /// \brief
    /// multiply a vector into an interger
    /// details
    /// This operator* multiplies a vector into a integer
    vector operator*=( const int & rhs ){
        x = x * rhs;
        y = y * rhs;
        return *this;
    }

    /// \brief
    /// multiply a vector into a vector
    /// details
    /// This operator* multiplies a vector into a vector
    vector operator*=( const vector & rhs ){
        x = x * rhs.x;
        y = y * rhs.y;
        return *this;
    }

};
#endif