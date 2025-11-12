#ifndef RECORDS_H
#define RECORDS_H

struct Order {
    int  o_orderkey;       // 주문 번호
    int  o_custkey;        // 고객 번호
    char o_orderdate[16];  // 주문 날짜 (YYYY-MM-DD)
};

struct LineItem {
    int  l_orderkey;
    int  l_partkey;
    int  l_suppkey;
    double l_quantity;
    double l_extendedprice;
};

#endif
