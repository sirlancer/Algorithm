class Solution {
public:
    double Power(double base, int exponent) {
        if(base==0.0 && exponent < 0){
            return 0.0;
        }
        unsigned int absExponent = (unsigned int)exponent;
        if(exponent < 0){
            absExponent = (unsigned int)(-exponent);
        }
        int res = PowerWithUnsignedExponent(base, absExponent);
        if(exponent < 0){
            return 1.0/res;
        }
        return res;
    }
    double PowerWithUnsignedExponent(double base, unsigned int exponent){
        if(exponent == 0){
            return 1.0;
        }
        if(exponent == 1){
            return base;
        }
        
        double res = PowerWithUnsignedExponent(base, exponent >> 1);
        res *= res;
        if(exponent & 0x1 ==1){
            res *= base;
        }
        return res;
        
    }
};