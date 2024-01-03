https://www.geeksforgeeks.org/problems/find-missing-and-repeating2512/1

class Solution{
public:
    vector<int> findTwoElement(vector<int> arr, int n) {
        // code here
        long long int ideal = 0;
        long long int actual = 0;
        long long int i2 = 0;
        long long int a2 = 0;
        for(int i=0;i<n;i++)
        {
            ideal += i+1;
            actual += arr[i];
            
            i2 += ((long long)(i+1)*(long long)(i+1));
            a2 += ((long long)(arr[i])*(long long)(arr[i]));
        }
        long long int xmy = actual - ideal;
        long long int x2y2 = a2 - i2;
        
        long long int xpy = x2y2/xmy;
        
        long long int x = (xpy + xmy)/2;
        long long int y = xpy - x;
        return {(int)x,(int)y};
        
        
    }
};