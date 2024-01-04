//https://leetcode.com/problems/find-consecutive-integers-from-a-data-stream/submissions/1136296555/

class DataStream {
    int valueCount;
    int other;
    int val;
    int K;
public:
    DataStream(int value, int k) {
        valueCount = 0;
        val = value;
        K = k;
    }
    
    bool consec(int num) {
        if(num == val){
        valueCount++;}

        else
        {
            valueCount = 0;
        }
        if(valueCount >= K)return true;
        return false;
    }
};

