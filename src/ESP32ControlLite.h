#ifndef ESP32CONTROL_H
#define ESP32CONTROL_H

#if defined(ESP32_CONTROL_10RS) || defined(ESP32_CONTROL_10RX) || defined(MINIPLC_RLX_32U)
  #include "ModbusSlaveSerial.h"
  #include "ModbusMaster232.h"
#endif
#if defined(ESP32_CONTROL_10) || defined(ESP32_CONTROL_10RS) || defined(ESP32_CONTROL_10RX) || defined(MINIPLC_RLX_32U)
  #include "ESP32ControlIO.h"
#endif


#endif