#include <iostream>
#include <cstdio>
#include <cstring>
#include "records.h"

bool parseOrderLine(const char* line, Order& o) {
    return std::sscanf(
        line,
        "%d|%d|%*[^|]|%*[^|]|%15[^|]|",
        &o.o_orderkey,
        &o.o_custkey,
        o.o_orderdate
    ) == 3;
}

int main() {
    FILE* fin = std::fopen("C:/Users/dnwls/DBsystem/DataBaseSystem/data/orders.tbl", "r");
    if (!fin) {
        std::perror("orders.tbl open failed");
        return 1;
    }

    char line[1024];
    int cnt = 0;
    while (std::fgets(line, sizeof(line), fin) && cnt < 5) {
        Order o;
        if (parseOrderLine(line, o)) {
            std::cout << "OrderKey: " << o.o_orderkey
                      << " | CustKey: " << o.o_custkey
                      << " | Date: " << o.o_orderdate << '\n';
            cnt++;
        }
    }

    std::fclose(fin);
    return 0;
}
