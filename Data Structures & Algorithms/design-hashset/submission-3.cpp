/*
resolve 2
----------
ill try more low level approach
*/

class MyHashSet {
private:
    vector<int> hashSet;
public:
    MyHashSet() {
        
    }
    
    void add(int key) {
        for(int val : hashSet){
            if (val == key) return;
        }

        hashSet.push_back(key);
    }
    
    void remove(int key) {
        for(int i = 0; i < hashSet.size(); i++){
            if(hashSet[i] == key){
                hashSet.erase(hashSet.begin() + i);
            }
        }
    }
    
    bool contains(int key) {
        for(int val : hashSet){
            if(val == key) return true;
        }

        return false;
    }
};

/**
 * Your MyHashSet object will be instantiated and called as such:
 * MyHashSet* obj = new MyHashSet();
 * obj->add(key);
 * obj->remove(key);
 * bool param_3 = obj->contains(key);
 */