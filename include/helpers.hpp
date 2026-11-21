#include "vex.h"

namespace helpers {
    /**
     * @brief clamps `value` between `lo` and `hi`
     * 
     * @param value initial value
     * @param lo lower boundary for return value
     * @param hi upper boundary far return value
     * 
     * @return the number closest to `value` that is between `lo` and `hi`
     */
    double clamp(double value, double lo, double hi);
}