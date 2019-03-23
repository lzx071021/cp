//
// Created by 聂师聪 on 2019-03-13.
//

#ifndef CP_SALES_DATA_H
#define CP_SALES_DATA_H

#include <string>

struct Sales_data {
    std::string bookNo;
    unsigned units_sold = 0;
    double revenue = 0;
};

#endif //CP_SALES_DATA_H
