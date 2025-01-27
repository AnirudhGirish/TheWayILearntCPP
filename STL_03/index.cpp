//! online store project (Covering Containers in STL)
#include<iostream>
#include<vector>
#include<map>
#include<set>
#include<deque>
#include<list>
#include<string>
#include<ctime>
#include<unordered_map>
#include<unordered_set>

using namespace std;

struct Product{
    int productId;
    string name;
    string category;
};

struct Order{
    int orderId;
    int productId;
    int quantity;
    string customerId;
    time_t orderDate;
};

int main(){
    vector<Product> products = {
        {001, "Laptop", "Electronics"},
        {002, "Book", "Stationary"},
        {003, "Coffee maker", "Kitchen"},
        {004, "Blender", "Kitchen"},
        {005, "Smartphone", "Electronics"},
        {006, "Desk lamp", "Home"}
    };

    deque<string> recentCostumers = {"C001", "C002", "C003"};
    recentCostumers.push_back("C004");
    recentCostumers.push_front("C005");

    list<Order> orderHistory;
    orderHistory.push_back({1,003,1,"C004",time(0)});
    orderHistory.push_back({2,004,5,"C001",time(0)});
    orderHistory.push_back({3,003,2,"C004",time(0)});

    set<string> categories;
    for(const auto &product : products){
        categories.insert(product.category);
    }

    map<int, int> productStock ={
        {001,10},
        {002,5},
        {003,14},
        {004,8},
        {005,5},
        {006,6}
    };

    multimap<string, Order> customerOrders;
    for(const auto &order : orderHistory){
        customerOrders.insert({order.customerId, order});
    }

    unordered_map<string, string> customerData = {
        {"C001","Alice"},
        {"C002","Bob"},
        {"C003","Carry"},
        {"C004","Vidya"},
        {"C005","Max"},
    };

    unordered_set<int> uniqueProductId;
    for(const auto &product : products){
        uniqueProductId.insert(product.productId);
    }

    return 0;
}