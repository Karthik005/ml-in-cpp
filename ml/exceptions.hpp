#include <exception>

struct ShapeMismatch : public exception {
    const char * msg () const throw () {
       return "Shape of matrices are mismatched.";
   }
};