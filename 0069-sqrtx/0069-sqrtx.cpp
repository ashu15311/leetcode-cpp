class Solution {
public:
    int mySqrt(int x) {
        for(double guess= 1;guess<=x;guess++){
            if(guess*guess==x){
                return (guess);
            }
            else if(guess*guess>x){
                return(guess-1);
            }
        }
        return 0;
    }
};