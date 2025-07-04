class MyHashMap {
public:
    vector<pair<int,int>>freq;
    MyHashMap() {
        
        
    }
    
    void put(int key, int value) {
        // int k=1;
        for(auto &i:freq){
            if(i.first==key){
                i.second = value;
                return;
            }
        
        }
        
        
        freq.push_back({key,value});
        
    }
    
    int get(int key) {
        int k=0;
        for(auto &i:freq){
            if(i.first==key){
                return i.second;
                
            }
        }
        return -1;
    }
    
    void remove(int key) {
        for(int i=0;i<freq.size();i++){
            if(freq[i].first==key){
                freq.erase(freq.begin()+i);
            }
        }
    }
};

/**
 * Your MyHashMap object will be instantiated and called as such:
 * MyHashMap* obj = new MyHashMap();
 * obj->put(key,value);
 * int param_2 = obj->get(key);
 * obj->remove(key);
 */