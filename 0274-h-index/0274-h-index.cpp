class Solution {
public:
    int hIndex(vector<int>& citations) {
        
        sort(citations.begin(),citations.end());
        int count=0;
        int n=citations.size();
        for(int i=0;i<citations.size();i++){
            if(citations[i] >= n - i){
                count++;
            }
        }
        return count;

    }
};