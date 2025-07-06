#include "ecrt.h"
#include <iostream>

// ethercat master
static ec_master_t* master = nullptr;
static ec_domain_t* domain1 = nullptr;



int main() {

    // 初始化ethercat master
    master = ecrt_request_master(0);
    if(master){
        std::cerr << " master created" << std::endl;
        
    }

    domain1 = ecrt_master_create_domain(master);
    if(domain1){
        std::cerr << " domain created" << std::endl;
        
    }


}