class Solution {
public:
    double angleClock(int hour, int minutes) {
        double minute=minutes*6;
        double hr=hour*30+(double)minutes*0.5;
        double diff=abs(hr-minute);
        return min(diff,360-diff);
    }
};