/*
after seeing solution
---------------------
using vector<int> and its standard function
*/

class MyHashSet {
private:
    vector<int> data;
public:
    MyHashSet() {
        
    }
    
    void add(int key) {
        data.push_back(key);
    }
    
    void remove(int key) {
        if(find(data.begin(), data.end(), key) != data.end()){
            erase(data, key);
        }
    }
    
    bool contains(int key) {
        return find(data.begin(), data.end(), key) != data.end();
    }
};

/**
 * Your MyHashSet object will be instantiated and called as such:
 * MyHashSet* obj = new MyHashSet();
 * obj->add(key);
 * obj->remove(key);
 * bool param_3 = obj->contains(key);
 */