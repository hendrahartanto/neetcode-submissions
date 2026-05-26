class MyHashSet {
public:
    unordered_set<int> hashSet;
    MyHashSet() {
    }
    
    void add(int key) {
        hashSet.insert(key);
    }
    
    void remove(int key) {
        hashSet.erase(key);
    }
    
    bool contains(int key) {
        return hashSet.count(key) != 0;
    }
};

/**
 * Your MyHashSet object will be instantiated and called as such:
 * MyHashSet* obj = new MyHashSet();
 * obj->add(key);
 * obj->remove(key);
 * bool param_3 = obj->contains(key);
 */