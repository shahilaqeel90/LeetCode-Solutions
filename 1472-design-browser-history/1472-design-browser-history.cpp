class BrowserHistory {
private:
    vector<string> history;
    int curr;
    int maxBound;

public:
    BrowserHistory(string homepage) {
        history.push_back(homepage);
        curr = 0;
        maxBound = 0;
    }
    
    void visit(string url) {
        curr++;
        if (curr < history.size()) {
            history[curr] = url;
        } else {
            history.push_back(url);
        }
        maxBound = curr;
    }
    
    string back(int steps) {
        curr = max(0, curr - steps);
        return history[curr];
    }
    
    string forward(int steps) {
        curr = min(maxBound, curr + steps);
        return history[curr];
    }
};

/**
 * Your BrowserHistory object will be instantiated and called as such:
 * BrowserHistory* obj = new BrowserHistory(homepage);
 * obj->visit(url);
 * string param_2 = obj->back(steps);
 * string param_3 = obj->forward(steps);
 */