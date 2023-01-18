#pragma once

#include<iostream>
#include<math.h>



class MathV{
    public:
        MathV(int);
        MathV at(int) const;

        friend std::ostream& operator << (std::ostream& out, const MathV& v);
    private:    
        int _n;
        int m_x[];
};