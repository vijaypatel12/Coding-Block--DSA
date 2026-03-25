class Solution {
public:
    int climbStairs(int a) {

        if(a<=2)
            return a;
            int first=1;
            int second=2;
            int third;
            
            for(int i=3;i<=a;i++){
                third=first+second;
                first=second;
                second=third;
            }

        
        return second;
    }
    
};