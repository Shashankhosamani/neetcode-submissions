class Solution {
public:
    int carFleet(int target, vector<int>& position, vector<int>& speed) {
        stack<double> st;
        vector<pair<int,int>> cars;
        for(int i=0;i<position.size();i++){
            cars.push_back({position[i],speed[i]});
        }
        sort(cars.begin(),cars.end());

        for(int i=cars.size()-1;i>=0;i--){
            double reqtime=(double)(target-cars[i].first)/cars[i].second;
            if(st.empty()){
                st.push(reqtime);
            }
            else{
                if (reqtime > st.top()){
                    st.push(reqtime);
                }
                
            }
        } 
        return st.size();   
    }
};
