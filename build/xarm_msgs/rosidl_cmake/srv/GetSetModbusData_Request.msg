# This format is suitable for the following services
#   - getset_tgpio_modbus_data

# modbus data to send
uint8[] modbus_data

# Specify the length of modbus data bytes to be sent, the default(less than or equal to 0) is the size of modbus_data
int16 modbus_length 0

# Specify the anticipated maximum respond data length in bytes
int16 ret_length

# host id, 9: END RS485, 10: Controller RS485
uint8 host_id 9

# whether to choose transparent transmission
bool is_transparent_transmission false

# whether to use port 503 for communication
# if it is true, it will connect to 503 port for communication when it is used for the first time, which is generally only useful for transparent transmission
bool use_503_port false

