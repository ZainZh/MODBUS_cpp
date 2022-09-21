#include <iostream>
#include <stdio.h>
#include <unistd.h>
#include <string.h>
#include <stdlib.h>
#include <errno.h>
#include <time.h>
#include "modbus/modbus.h"
#include "modbus/modbus-rtu.h"

#pragma comment(lib, "modbus.lib")

using namespace std;

int main() {
    modbus_t *mb;

    mb = modbus_new_rtu("/dev/ttyUSB0", 9600, 'N', 8, 1);
    if (mb == NULL) {
        std::cout << "connect fail" << std::endl;
        return -1;
    }
    modbus_set_slave(mb, 1);
    modbus_connect(mb);
    modbus_write_bit(mb, 2, 1);
}
