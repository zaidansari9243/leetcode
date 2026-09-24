class Solution {
public:
    int largestRectangleArea(vector<int>& heights) {
        int n=heights.size();
        int ansi[n];
        int apsi[n];
        stack<int> psi ;
        psi.push(0);
        apsi[0]=-1;
        for(int i=1;i<n;i++){
            while(psi.size()>0 && heights[psi.top()]>=heights[i]) psi.pop();
            if(psi.size()==0) apsi[i] = -1;
            else apsi[i]=psi.top();
            psi.push(i);
        }
        stack<int> nsi ;
        nsi.push(n-1);
        ansi[n-1]=n;
        for(int i=n-2;i>=0;i--){
            while(nsi.size()>0 && heights[nsi.top()]>=heights[i]) nsi.pop();
            if(nsi.size()==0) ansi[i] = n;
            else ansi[i]=nsi.top();
            nsi.push(i);
        }
        int maxarea = 0;
        for(int i=0;i<n;i++){
            int area = heights[i] * (ansi[i] - apsi[i] -1);
            maxarea = max(maxarea,area);
        }
        return maxarea;
    }
};