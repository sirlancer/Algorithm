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
        double res = 1.0;
        for(int i=0; i<exponent; i++){
            res *= base;
        }
        return res;
    }
};