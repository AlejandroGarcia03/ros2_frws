# This format is suitable for the following services
#   - robotiq_set_position
#   - robotiq_open
#   - robotiq_close

# robotiq_set_position
uint8 pos

# robotiq_set_position/robotiq_open/robotiq_close
uint8 speed     0xFF
uint8 force     0xFF
bool wait       true
float32 timeout 5

