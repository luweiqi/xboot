#ifndef __FRAMEWORK_L_HARDWARE_H__
#define __FRAMEWORK_L_HARDWARE_H__

#ifdef __cplusplus
extern "C" {
#endif

#include <framework/luahelper.h>

#define	MT_NAME_HARDWARE_UART		"mt_name_hardware_uart"
#define	MT_NAME_HARDWARE_I2C		"mt_name_hardware_i2c"
#define	MT_NAME_HARDWARE_GPIO		"mt_name_hardware_gpio"
#define	MT_NAME_HARDWARE_LED		"mt_name_hardware_led"
#define	MT_NAME_HARDWARE_LEDTRIG	"mt_name_hardware_ledtrig"

int luaopen_hardware_uart(lua_State * L);
int luaopen_hardware_i2c(lua_State * L);
int luaopen_hardware_gpio(lua_State * L);
int luaopen_hardware_led(lua_State * L);
int luaopen_hardware_ledtrig(lua_State * L);

#ifdef __cplusplus
}
#endif

#endif /* __FRAMEWORK_L_HARDWARE_H__ */
