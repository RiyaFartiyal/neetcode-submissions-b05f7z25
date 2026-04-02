class StockSpanner {
    stack<pair<int, int>> stak; 

public:
    StockSpanner() {}

    int next(int price) {
        int span = 1;
        while (!stak.empty() && stak.top().first <= price) {
            span += stak.top().second;
            stak.pop();
        }
        stak.push({price, span});
        return span;
    }
};