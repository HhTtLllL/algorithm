class RecentCounter {
public:
    queue<int> q;
    RecentCounter() 
    {

    }
    
    int ping(int t) 
    {
        q.push(t);
        int left = t - 3000;
        while(q.front() < left)
        {
            q.pop();
        }
        return q.size();
    }
};

